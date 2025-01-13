#pragma once
#include "ControlState.h"

class ControlState;

class Control{
public:
    Control();
    inline ControlState* getCurrentState() const {return currentState;}
    void toggle();
    void setState(ControlState& newState);
private:
    ControlState* currentState;
};