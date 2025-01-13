#include "../inc/Light.h"
#include "../inc/ConcreteLightStates.h"

Light::Light(){
    currentState = &LightOff::getInstance();  // Set initial state
}

void Light::setState(LightState& newState){
    currentState->exit(this);    // Pre state change
    currentState = &newState;    // Actual state change
    currentState->enter(this);   // Post state change
}

void Light::toggle(){
    currentState->toggle(this);  // Delegate the task of determining the next state to the current state!
}