#include<SoftwareSerial.h>
SoftwareSerial mySerial(1,0);
void Check_Reset();
void SendTextMessage();
int sms_count=0;
int sensor=7;
int sensor_value;


void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
Serial.begin(9600);
mySerial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
sensor_value=digitalRead(sensor);
if(sensor_value==HIGH)
    {
      Check_Burglar();
      Check_Reset();
    }
}

void Check_Burglar()
{
  sensor_value=digitalRead(sensor);
  if(sensor_value==0)
  {
      SendTextMessage();
    }
  
}

void Check_Reset()
{
  
  sms_count=0;
}

void SendTextMessage()
{
  mySerial.println("AT+CMGF=1");
  delay(1000);
  mySerial.println("AT+CMGS=\"+918151089302\"\r");
  delay(1000);
  mySerial.println("Intruder Alert");
  delay(200);
  mySerial.println((char)26);
  delay(1000);
  Serial.println("Message Sent");
  sms_count++;
}
