//
// Created by Ethan Halliday on 2019-10-27.
//

#include "Statement.h"

Statement::~Statement() {
    for (auto p : operands) {
        delete p;
    }
    operands.clear();
}
std::ostream& operator<<( std::ostream& out, const Statement& b ) {
    b.print( out );
    return out;
}

Statement::Statement() = default;

Statement::Statement(Operand* op1) {
    operands.push_back(op1);
}

Statement::Statement(Operand* op1, Operand* op2) {
    operands.push_back(op1);
    operands.push_back(op2);
}