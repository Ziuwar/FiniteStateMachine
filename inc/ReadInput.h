#ifndef READINPUT_H
#define READINPUT_H

#include <string>

class ReadInput {
public:
    ReadInput();
   ~ReadInput();

    void readInput(void);
    std::string getInput(void) const;

private:
    std::string input;
};

#endif // READINPUT_H