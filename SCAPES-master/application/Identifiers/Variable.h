//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_VARIABLE_H
#define UNTITLED_VARIABLE_H


#include "Identifier.h"

class Variable: public Identifier {
public:
    Variable(std::string nameParam, int valueParam);
    int getValue();
private:
    int value;
};


#endif //UNTITLED_VARIABLE_H
