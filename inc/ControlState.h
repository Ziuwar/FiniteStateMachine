#pragma once
#include "Control.h"

class Control;

class ControlState
{
public:
    virtual void enter(Control* control) = 0;
    virtual void toggle(Control* control) = 0;
    virtual void exit (Control* control) = 0;
    virtual ~ControlState(){}
};
