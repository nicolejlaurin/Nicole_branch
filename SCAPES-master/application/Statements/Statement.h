//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_STATEMENT_H
#define UNTITLED_STATEMENT_H

#include <string>
#include <vector>
#include "../Operand.h"

class Statement {
public:
    Statement();
    explicit Statement(Operand* op1);
    Statement(Operand* op1, Operand* op2);
    virtual ~Statement();
    virtual void run() = 0;
    virtual void compile(std::string tokens) = 0;
    friend std::ostream& operator<<( std::ostream& out, const Statement& b );
protected:
    std::vector<Operand*> operands;
    std::string label;
private:
    virtual void print( std::ostream& ) const = 0;
};

#endif //UNTITLED_STATEMENT_H
