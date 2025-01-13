#include "../inc/Control.h"
#include "../inc/ApplicationStates.h"

Control::Control(){
    currentState = &LightOff::getInstance();  // Set initial state
}

void Control::setState(ControlState& newState){
    currentState->exit(this);    // Pre state change
    currentState = &newState;    // Actual state change
    currentState->enter(this);   // Post state change
}

void Control::toggle(){
    currentState->toggle(this);  // Delegate the task of determining the next state to the current state!
}