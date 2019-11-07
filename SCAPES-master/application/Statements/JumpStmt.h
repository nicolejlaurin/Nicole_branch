//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_JUMPSTMT_H
#define UNTITLED_JUMPSTMT_H

#include "Statement.h"

class JumpStmt: public Statement {
private:
public:
    explicit JumpStmt(Operand* op1);
    void print(std::ostream& os) const override;
    void run() override;
    void compile(std::string instruction) override;
};
#endif //UNTITLED_JUMPSTMT_H
