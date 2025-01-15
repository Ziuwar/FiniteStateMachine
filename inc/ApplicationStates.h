#pragma once
#include "ApplicationStates.h"
#include "Control.h"

class LightOff : public ControlState
{
public:
    void enter(Control* control) {}
    void toggle(Control* control);
	void action(Control* control);
    void exit(Control* control);
    static ControlState& getInstance();
private:
    LightOff() {}
    LightOff(const LightOff& other);
    LightOff& operator=(const LightOff& other);
};

class LowIntensity : public ControlState
{
public:
	void enter(Control* control) {}
	void toggle(Control* control);
	void action(Control* control);
	void exit(Control* control) {}
	static ControlState& getInstance();

private:
	LowIntensity() {}
	LowIntensity(const LowIntensity& other);
	LowIntensity& operator=(const LowIntensity& other);
};

class MediumIntensity : public ControlState
{
public:
	void enter(Control* control) {}
	void toggle(Control* control);
	void action(Control* control);
	void exit(Control* control) {}
	static ControlState& getInstance();

private:
	MediumIntensity() {}
	MediumIntensity(const MediumIntensity& other);
	MediumIntensity& operator=(const MediumIntensity& other);
};

class HighIntensity : public ControlState
{
public:
	void enter(Control* control) {}
	void toggle(Control* control);
	void action(Control* control);
	void exit(Control* control) {}
	static ControlState& getInstance();

private:
	HighIntensity() {}
	HighIntensity(const HighIntensity& other);
	HighIntensity& operator=(const HighIntensity& other);
};