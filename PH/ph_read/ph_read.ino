String inputstring = "";
String sensorstring = "";
boolean input_stringcomplete = false;
boolean sensor_stringcomplete = false;
//a string to hold incoming data from the PC
//a string to hold the data from the Atlas Scientific product
//have we received all the data from the PC
//have we received all the data from the Atlas Scientific
//product
void setup(){
  Serial.begin(38400);
  Serial2.begin(38400);
  inputstring.reserve(5);
  sensorstring.reserve(30);
  Serial.println("Starting...");
}
//set up the hardware
//set baud rate for the hardware serial port_0 to 38400
//set baud rate for software serial port_3 to 38400
//set aside some bytes for receiving data from the PC
//set aside some bytes for receiving data from Atlas Scientific
//product
void serialEvent() {
  char inchar = (char)Serial.read();
  inputstring += inchar;
  if(inchar == '\r') {input_stringcomplete = true;}
  }
//if the hardware serial port_0 receives
//a char
//get the char we just received
//add it to the inputString
//if the incoming character is a <CR>,
//set the flag
void serialEvent2(){
  char inchar = (char)Serial2.read();
  sensorstring += inchar;
  if(inchar == '\r') {sensor_stringcomplete = true;}
}
//if the hardware serial port_3 receives
//a char
//get the char we just received
//add it to the inputString
//if the incoming character is a <CR>,
//set the flag

void loop(){
if (input_stringcomplete){
 Serial2.print(inputstring);
 inputstring = "";
 input_stringcomplete = false;
 }
//here we go...
//if a string from the PC has been received in its entierty
//send that string to the Atlas Scientific product
//clear the string:
//reset the flag used to tell if we have received a completed
//string from the PC
//Serial.println("Reading...");
if (sensor_stringcomplete){
 Serial.println(sensorstring);
 sensorstring = "";
 sensor_stringcomplete = false;
}
}
