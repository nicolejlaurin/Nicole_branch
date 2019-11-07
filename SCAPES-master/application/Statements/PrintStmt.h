//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_PRINTSTMT_H
#define UNTITLED_PRINTSTMT_H

#include "Statement.h"

class PrintStmt: public Statement {
private:
public:
    explicit PrintStmt(Operand* op1);
    void print(std::ostream& os) const override;
    void run() override;
    void compile(std::string instruction) override;
};
#endif //UNTITLED_PRINTSTMT_H
