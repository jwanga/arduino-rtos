#ifndef IOBSERVER_H_
#define IOBSERVER_H_
/**
*Contains all configuration constants.
*/

#include <StandardCplusplus.h>

#include "Arduino.h"
#include "LoopMessage.h"
#include "SetupMessage.h"
class IObserver {
  public :
    virtual void On(LoopMessage message) {};
    virtual void On(SetupMessage message) {};
}; 


#endif
