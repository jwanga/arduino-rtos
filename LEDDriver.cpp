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
};

void LEDDriver::On(LoopMessage message){
 	
};;
