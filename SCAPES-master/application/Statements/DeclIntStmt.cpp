//
// Created by Ethan Halliday on 2019-10-27.
//

#include <iostream>
#include "DeclIntStmt.h"

DeclIntStmt::DeclIntStmt(Operand* op1): Statement{op1} {

}

void DeclIntStmt::run() {
    std::cout << "Declare Integer Statement run executed.\n";
}

void DeclIntStmt::compile(std::string instruction) {
    std::cout << "Declare Integer compile executed with arguments: " << instruction << std::endl;
}

void DeclIntStmt::print(std::ostream &os) const {
    os << "Declare Integer Statement called. Operands: " << operands[0]->getIdentifier()->getName() << ".";
}
