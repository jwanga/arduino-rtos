#ifndef IOBSERVER_H_
#define IOBSERVER_H_
/**
*Contains all configuration constants.
*/

#include <StandardCplusplus.h>
#include <functional>

#include "Arduino.h"
#include "LoopMessage.h"
#include "SetupMessage.h"
class IObserver {
  public :
    virtual void On(LoopMessage message) {};
    virtual void On(SetupMessage message) {};

    /**
	* Executes the  
	*/
	template<typename F>
	void throttle(unsigned long interval, unsigned long &lastUpdatedTime, F lambda) {
		
		Serial.println(millis() - lastUpdatedTime);
		if (millis() - lastUpdatedTime > interval) {
			Serial.println("updated");
			lambda();
			lastUpdatedTime = millis();
		}
	}
}; 


#endif
