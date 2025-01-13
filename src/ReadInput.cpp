#include "../inc/ReadInput.h"
#include <iostream>

ReadInput::ReadInput(){
    this->input = "";
};

ReadInput::~ReadInput(){
    this->input = "";
};

void ReadInput::readInput(void) {
    std::string buffer = "";
    std::cout << "Enter input: ";
    std::getline(std::cin, buffer);
    this->input.assign(buffer);
    return;
};

std::string ReadInput::getInput(void) const{
    return this->input;
};