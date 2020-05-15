void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(1000);
Serial.print("\r");
Serial.print("AT+CMGF=1\r");
delay(1000);
Serial.print("AT+CMGS=\"+918151089302\"\r");
delay(1000);
Serial.print("iFUTURE Technology\r");
delay(1000);
Serial.write(0x1A);
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
