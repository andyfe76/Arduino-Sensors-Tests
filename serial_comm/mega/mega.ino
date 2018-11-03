char b;
void setup() {
  Serial.begin(9600);
  Serial.println("Init...");
  delay(500);
  Serial1.begin(9600);
  Serial.println("Waiting....");
}

void loop() {
  if (Serial1.available() > 0) {
   b = Serial1.read();
   Serial.print(b)  ;
  }
// delay(100);
}
