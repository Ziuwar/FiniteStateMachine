#include "main.h"

int main(int argc, char** argv){

    ReadInput Input1;
    Control control;

    while(1){

        Input1.readInput();

        control.toggle();
        control.toggle();

        if(Input1.getInput() == "0"){
            
            break;
        }
    }
    return 0;
}
