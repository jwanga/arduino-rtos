#ifndef LOOPMESSAGE_H_
#define LOOPMESSAGE_H_

#include <StandardCplusplus.h>

#include "Arduino.h"

struct LoopMessage {
  char* message;
  char const * type = "LoopMessage";
}; 


#endif
