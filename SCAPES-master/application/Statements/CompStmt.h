//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_COMPSTMT_H
#define UNTITLED_COMPSTMT_H

#include "Statement.h"

class CompStmt: public Statement {
private:
public:
    CompStmt(Operand* op1, Operand* op2);
    void print(std::ostream& os) const override;
    void run() override;
    void compile(std::string instruction) override;
};
#endif //UNTITLED_COMPSTMT_H
