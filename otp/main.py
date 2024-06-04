# app.py

from flask import Flask, request, render_template
from flask_mail import Mail, Message
from celery import Celery

app = Flask(__name__)
app.config['MAIL_SERVER'] = 'smtp.gmail.com'
app.config['MAIL_PORT'] = 587
app.config['MAIL_USE_TLS'] = True
app.config['MAIL_USERNAME'] = 'mohamedrizwan.s2021eceb@sece.ac.in'
app.config['MAIL_PASSWORD'] = 's.rizw@n22'
app.config['MAIL_DEFAULT_SENDER'] = 'mohamedrizwan.s2021eceb@sece.ac.in'

# Initialize Flask-Mail
mail = Mail(app)

# Initialize Celery
celery = Celery(app.name, broker='redis://localhost:6379/0')

# Configure Celery to use the app context
celery.conf.update(app.config)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/a', methods=['POST'])
def send_otp():
    email = request.form['email']
    send_otp_email.delay(email)
    return 'Sending OTP...'

@celery.task
def send_otp_email(email):
    # Generate OTP (mocking it here for demonstration)
    otp = '123456'
    
    # Send OTP via email
    msg = Message('One Time Password (OTP)', recipients=[email])
    msg.body = f'Your OTP is: {otp}'
    mail.send(msg)
    return 'OTP sent successfully'

if __name__ == '__main__':
    app.run(debug=True)
