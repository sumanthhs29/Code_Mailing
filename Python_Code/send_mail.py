import smtplib
s = smtplib.SMTP('smtp.gmail.com',587)
s.starttls()
s.login("senderMail","senderPassword")
SUBJECT = "Checking"
TEXT = "Text  is here"
message = 'Subject: {}\n\n{}'.format(SUBJECT, TEXT)
s.sendmail("senderMail","receiverMail",message)
s.quit()
