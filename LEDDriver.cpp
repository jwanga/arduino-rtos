#include <StandardCplusplus.h>
#include <string> 

#include "Command.h"
#include "LEDDriver.h"
#include "Arduino.h"
#include "Configuration.h"
#include "SetupMessage.h"
#include "LoopMessage.h"

LEDDriver::LEDDriver(){
    Serial.println("LEDDriver instantialted");
};

void LEDDriver::On(SetupMessage message){
  	Serial.println("LEDDriver Setup Notified!!!");

  	pinMode(LED_BUILTIN, OUTPUT);
};

void LEDDriver::On(LoopMessage message){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);   
};;
