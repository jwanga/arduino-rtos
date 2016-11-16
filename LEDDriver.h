#ifndef LEDDRIVER_H_
#define LEDDRIVER_H_

#include <StandardCplusplus.h>
#include <string> 

#include "IObserver.h"
#include "LoopMessage.h"
#include "SetupMessage.h"

/**
 * Example sensor class
 */
class LEDDriver : public IObserver { 
  private:   
  public :
    LEDDriver();
    void On(SetupMessage message);
    void On(LoopMessage message);
}; 
#endif


