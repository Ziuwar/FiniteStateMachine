#include "../inc/ApplicationStates.h"
#include <iostream>

void LightOff::toggle(Control* control)
{
	// Off -> Low
	control->setState(LowIntensity::getInstance());
}

void LightOff::action(Control* control){
	std::cout << "State is OFF!" << "\n";
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

void LowIntensity::action(Control* control){
	std::cout << "State is LOW!" << "\n";
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

void MediumIntensity::action(Control* control){
	std::cout << "State is MEDIUM!" << "\n";
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

void HighIntensity::action(Control* control){
	std::cout << "State is HIGH!" << "\n";
}

ControlState& HighIntensity::getInstance()
{
	
	static HighIntensity singleton;
	return singleton;
}