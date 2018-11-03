int c;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello!!");
  c = 0;
}


void loop() {
  Serial.write(c);
  c = c + 1;
 delay(1000);
}
