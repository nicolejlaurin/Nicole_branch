//
// Created by Ethan Halliday on 2019-10-27.
//

#include <iostream>
#include "EndStmt.h"

EndStmt::EndStmt(): Statement{} {

}

void EndStmt::run() {
    std::cout << "End Statement run executed.\n";
}

void EndStmt::compile(std::string instruction) {
    std::cout << "End Statement compile executed with arguments: " << instruction << std::endl;
}

void EndStmt::print(std::ostream &os) const {
    os << "End Statement called. No operands.";
}
