const express = require("express");
const session = require("express-session");
const { v4: uuidv4 } = require("uuid");

const app = express();
const PORT = 3000;

app.use(express.json());

const sessionStore = {}; // This will store active sessions

app.use(
	session({
		genid: (req) => uuidv4(), // Generate unique session IDs
		secret: "your_secret_key",
		resave: false,
		saveUninitialized: true,
		cookie: { maxAge: 60000 }, // Set cookie expiration time
	}),
);

// Middleware to check if the user is already logged in on another device
app.use((req, res, next) => {
	const sessionId = req.session.id;
	const userId = req.session.userId;

	if (userId && sessionStore[userId] && sessionStore[userId] !== sessionId) {
		req.session.destroy((err) => {
			if (err) {
				return res.status(500).json({ message: "Error destroying session" });
			}
			return res.status(401).json({ message: "Logged in from another device" });
		});
	} else {
		next();
	}
});

app.get("/", (rweq, res) => {
	res.sendFile("C:/Users/moham/OneDrive/Desktop/CPp/project/index.html");
});
// Login endpoint
app.post("/login", (req, res) => {
	const { username } = req.body;

	// Here, implement your user authentication logic
	// For demonstration, we assume authentication is successful

	// Check if this user is already logged in somewhere else
	if (sessionStore[username]) {
		// Destroy the previous session
		sessionStore[username].destroy((err) => {
			if (err) {
				return res
					.status(500)
					.json({ message: "Error destroying previous session" });
			}
		});
	}

	// Store the current session
	req.session.userId = username;
	sessionStore[username] = req.session;

	res.json({ message: "Logged in successfully" });
});

// Logout endpoint
app.post("/logout", (req, res) => {
	const userId = req.session.userId;

	if (userId && sessionStore[userId]) {
		delete sessionStore[userId];
	}

	req.session.destroy((err) => {
		if (err) {
			return res.status(500).json({ message: "Error logging out" });
		}
		res.json({ message: "Logged out successfully" });
	});
});

app.listen(PORT, () => {
	console.log(`Server is running on port ${PORT}`);
});
