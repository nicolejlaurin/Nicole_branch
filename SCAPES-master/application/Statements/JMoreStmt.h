//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_JMORESTMT_H
#define UNTITLED_JMORESTMT_H

#include "Statement.h"

class JMoreStmt: public Statement {
private:
public:
    explicit JMoreStmt(Operand* op1);
    void print(std::ostream& os) const override;
    void run() override;
    void compile(std::string instruction) override;
};
#endif //UNTITLED_JMORESTMT_H
