const express = require('express');
const nodemailer = require('nodemailer');
const speakeasy = require('speakeasy');
const bodyParser = require('body-parser');



const app = express();
app.use(bodyParser.urlencoded({ extended: true }));

app.use(express.json());

const transporter = nodemailer.createTransport({
  service: 'Gmail',
  auth: {
    user: 'mohamedrizwan.s2021eceb@sece.ac.in',
    pass: 's.rizw@n22' // Note: Use environment variables to store sensitive information in production
  }
});

app.get('/',(req,res)=>{
    res.sendFile(__dirname+"/index.html")
    
})
// Endpoint to send OTP via email
app.post('/a', (req, res) => {
  // Generate a secret key for OTP
  const secret = speakeasy.generateSecret({ length: 10 });

  // Generate OTP
  const otp = speakeasy.totp({
    secret: secret.base32,
    encoding: 'base32'
  });

  // Email configuration
  const mailOptions = {
    from: 'mohamedrizwan.s2021eceb@sece.ac.in',
    to: req.body.email,
    subject: 'One Time Password (OTP)',
    text: `Your OTP is: ${otp}`
};
    console.log(req.body.email)

  
  transporter.sendMail(mailOptions, (error, info) => {
    if (error) {
      console.log('Error occurred:', error);
      res.status(500).send('Failed to send OTP');
    } else {
      console.log('Email sent:', info.response);
      res.status(200).send('OTP sent successfully');
    }
  });
});

// Start the server
const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
  console.log(`Server is running on port ${PORT}`);
});
