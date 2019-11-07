//
// Created by Ethan Halliday on 2019-10-27.
//

#include <iostream>
#include "JumpStmt.h"

JumpStmt::JumpStmt(Operand* op1): Statement{op1} {

}

void JumpStmt::run() {
    std::cout << "Jump Statement run executed.\n";
}

void JumpStmt::compile(std::string instruction) {
    std::cout << "Jump Statement compile executed with arguments: " << instruction << std::endl;
}

void JumpStmt::print(std::ostream &os) const {
    os << "Jump Statement called. Operands: " << operands[0]->getIdentifier()->getName() << ".";
}