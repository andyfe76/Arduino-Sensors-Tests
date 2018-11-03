// demo of Grove - MOSFET
// use pin 6 to control a motor

int motorPin = 12;

void setup()
{
    Serial.begin(9600);
    pinMode(motorPin, OUTPUT);
    Serial.println("Grove - MOSFET Test Demo!");
}

void loop()
{
    motorOnThenOffWithSpeed();
    motorAcceleration();
}

void motorOnThenOffWithSpeed()
{
    int onSpeed  = 255;                         // a number between 0 (stopped) and 255 (full speed)
    int onTime   = 3000;
    int offSpeed = 0;                          // a number between 0 (stopped) and 255 (full speed)
    int offTime  = 3000;
    analogWrite(motorPin, onSpeed);
    Serial.println("200");
    delay(onTime);
    analogWrite(motorPin, offSpeed);
    Serial.println("50");
    delay(offTime);
}

void motorAcceleration()
{
    int delayTime = 50;
    for(int i=0; i<256; i++)
    {
        analogWrite(motorPin, i);
        Serial.println(i);
        delay(delayTime);
    }

    for(int i=255; i>=0; i--)
    {
        analogWrite(motorPin, i);
        Serial.println(i);
        delay(delayTime);
    }
}
