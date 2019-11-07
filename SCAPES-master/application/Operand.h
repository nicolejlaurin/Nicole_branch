//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_OPERAND_H
#define UNTITLED_OPERAND_H


#include "Identifiers/Identifier.h"

class Operand {
public:
    explicit Operand(Identifier* identifier1);
    Identifier* getIdentifier();
private:
    Identifier* identifier;
};


#endif //UNTITLED_OPERAND_H
