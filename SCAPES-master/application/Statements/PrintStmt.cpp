//
// Created by Ethan Halliday on 2019-10-27.
//

#include <iostream>
#include "PrintStmt.h"

PrintStmt::PrintStmt(Operand* op1): Statement{op1} {

}

void PrintStmt::run() {
    std::cout << "Print Statement run executed.\n";
}

void PrintStmt::compile(std::string instruction) {
    std::cout << "Print Statement compile executed with arguments: " << instruction << std::endl;
}

void PrintStmt::print(std::ostream &os) const {
    os << "Print Statement called. Operands: " << operands[0]->getIdentifier()->getName() << ".";
}