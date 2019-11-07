//
// Created by Ethan Halliday on 2019-10-27.
//

#include "CompStmt.h"
#include <iostream>

CompStmt::CompStmt(Operand* op1, Operand* op2): Statement{op1, op2} {

}

void CompStmt::run() {
    std::cout << "Compare Statement run executed.\n";
}

void CompStmt::compile(std::string instruction) {
    std::cout << "Compare compile executed with arguments: " << instruction << std::endl;
}

void CompStmt::print(std::ostream &os) const {
    os << "Compare Statement called. Operands: " << operands[0]->getIdentifier()->getName()
       << " and " << operands[1]->getIdentifier()->getName() << ".";
}