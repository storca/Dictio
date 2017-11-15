#include "dictio.h"

Dictio myDictio; //Object declaration

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myDictio.addVar("myVar"); //Adding "myVar" to the variables list
myDictio.addVar("myVar2"); //Idem for "myVar2"
myDictio.setVar("myVar", "myValue"); //Setting "myVar" value to "myValue"
myDictio.setVar("myVar2", "ho boi");  //Idem

myDictio.setVar("myVar2", "o boi");   //Changing myVar2 value to "o boi"
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(myDictio.getValue("myVar"));
//Will print "myValue"
delay(1000);
Serial.println(myDictio.getValue("myVar2"));
//Will print "o boi"
}
