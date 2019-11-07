//
// Created by Ethan Halliday on 2019-10-27.
//

#include "Operand.h"

#include <utility>

Operand::Operand(Identifier* identifier1) {
    identifier = identifier1;
}

Identifier *Operand::getIdentifier() {
    return identifier;
}
