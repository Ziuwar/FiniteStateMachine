/** 
 * @file main.cpp
 * @brief Main entry point for the Finite State Machine application.
 *
 * This file contains the main function which initializes the ReadInput and Control objects,
 * and runs a loop to read input and toggle the control state.
 * The loop continues until the input is "0".
 *
 * @version 1.0
 * @date 2023-10-10
 * 
 * @note This application demonstrates a simple finite state machine.
 */

#include "main.h"

/**
 * @brief Main function for the Finite State Machine application.
 *
 * This function initializes the ReadInput and Control objects, and runs a loop to read input
 * and toggle the control state. The loop continues until the input is "0".
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line arguments.
 * @return int Returns 0 upon successful completion.
 */
int main(int argc, char** argv){

    ReadInput Input1;
    Control control;

    while(1){
        
        Input1.readInput();
        
        control.action();
        control.toggle();

        if(Input1.getInput() == "0"){
          
            break;
        }
    }
    return 0;
}