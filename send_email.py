import smtplib
from email.message import EmailMessage

def email_alert(subject, body, to):
    msg = EmailMessage()
    msg.set_content(body)

    user = "demo69lemonade@gmail.com"
    msg['from'] = user
    msg['to'] = to
    msg['subject'] = subject
    password = "njtfjabmchkgqdkr"  # Use app password if 2FA is enabled

    server = smtplib.SMTP("smtp.gmail.com", 587)
    server.starttls()
    server.login(user, password)
    server.send_message(msg)
    server.quit()

if __name__ == '__main__':
    email_alert("Indusland","30,000 debited from you account xxxxxxxxxx6523", "dasguptaparthiv@gmail.com")
