// constants won't change. Used here to 
// set pin numbers:
const int ledPin =  11;      // the number of the LED pin


void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);      
}

void loop()
{
    digitalWrite(ledPin, HIGH);
    delay(10000);
    digitalWrite(ledPin, LOW);
    delay(10000);
  }


