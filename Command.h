#pragma once
#ifndef COMMAND_H_
#define COMMAND_H_

#include <StandardCplusplus.h>
#include <serstream>
#include <vector>
#include <iterator>

#include  "Arduino.h"
#include "IObserver.h"

using namespace std;

/**
*Defines the command dispatcher
*/
extern std::vector<IObserver*> list;

inline void Attach(IObserver *observer) {
    list.push_back(observer);
    //Serial.println("Attached instance.");
}

inline void Detach(IObserver *observer) {
    list.erase(std::remove(list.begin(), list.end(), observer), list.end());    
    //Serial.println("Detached instance");
}

//Template functions have to be defined in the header.
template<typename T>
inline void Notify(T message) {
    for(typename std::vector<IObserver*>::const_iterator i = list.begin(); i != list.end(); ++i) { 
        if(*i != 0)
        {
            (*i)->On(message);
        }
    }
}
#endif
