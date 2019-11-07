//
// Created by Ethan Halliday on 2019-10-27.
//

#include <iostream>
#include "ReadStmt.h"

ReadStmt::ReadStmt(Operand* op1): Statement{op1} {

}

void ReadStmt::run() {
    std::cout << "Read Statement run executed.\n";
}

void ReadStmt::compile(std::string instruction) {
    std::cout << "Read Statement compile executed with arguments: " << instruction << std::endl;
}

void ReadStmt::print(std::ostream &os) const {
    os << "Read Statement called. Operands: " << operands[0]->getIdentifier()->getName() << ".";
}