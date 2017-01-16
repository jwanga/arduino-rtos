#include <ArduinoSTL.h>
#include <SPI.h>

#include "Command.h"
#include "IObserver.h"
#include "LoopMessage.h"
#include "SetupMessage.h"
#include "Configuration.h"
#include "LEDDriver.h"

LEDDriver ledDriver = LEDDriver();

void setup() {
  SetupMessage setupMessage;

  Serial.begin(9600);

  //Attach Observable classes to the registrar.
  Attach(&ledDriver);

  Serial.println("Initializing...");

  Notify<SetupMessage>(setupMessage);

}

void loop() {
  LoopMessage loopMessage;
  Notify<LoopMessage>(loopMessage);
}
