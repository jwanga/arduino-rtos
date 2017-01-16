#ifndef LOOPMESSAGE_H_
#define LOOPMESSAGE_H_

#include <ArduinoSTL.h>

#include "Arduino.h"

struct LoopMessage {
  char* message;
  char const * type = "LoopMessage";
};


#endif
