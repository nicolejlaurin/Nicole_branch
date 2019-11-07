//
// Created by Ethan Halliday on 2019-10-27.
//

#include <iostream>
#include "JMoreStmt.h"

JMoreStmt::JMoreStmt(Operand* op1): Statement{op1} {

}

void JMoreStmt::run() {
    std::cout << "Jump If More Statement run executed.\n";
}

void JMoreStmt::compile(std::string instruction) {
    std::cout << "Jump If More Statement compile executed with arguments: " << instruction << std::endl;
}

void JMoreStmt::print(std::ostream &os) const {
    os << "Jump If More Statement called. Operands: " << operands[0]->getIdentifier()->getName() << ".";
}