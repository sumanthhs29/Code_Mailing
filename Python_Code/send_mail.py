import smtplib
s = smtplib.SMTP('smtp.gmail.com',587)
s.starttls()
s.login("cabtime2020@gmail.com","cab2020time@")
SUBJECT = "Checking"
TEXT = "Text  is here"
message = 'Subject: {}\n\n{}'.format(SUBJECT, TEXT)
s.sendmail("cabtime2020@gmail.com","sumanthhs29@gmail.com",message)
s.quit()