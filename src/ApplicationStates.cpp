#include "../inc/ApplicationStates.h"

void LightOff::toggle(Control* control)
{
	// Off -> Low
	control->setState(LowIntensity::getInstance());
}

ControlState& LightOff::getInstance()
{
	static LightOff singleton;
	return singleton;
}

void LightOff::exit(Control* control){
	return;
};

void LowIntensity::toggle(Control* control)
{
	// Low -> Medium
	control->setState(MediumIntensity::getInstance());
}

ControlState& LowIntensity::getInstance()
{
	static LowIntensity singleton;
	return singleton;
}

void MediumIntensity::toggle(Control* control)
{
	// Medium -> High
	control->setState(HighIntensity::getInstance());
}

ControlState& MediumIntensity::getInstance()
{
	static MediumIntensity singleton;
	return singleton;
}

void HighIntensity::toggle(Control* control)
{
	// High -> Low
	control->setState(LightOff::getInstance());
}

ControlState& HighIntensity::getInstance()
{
	static HighIntensity singleton;
	return singleton;
}