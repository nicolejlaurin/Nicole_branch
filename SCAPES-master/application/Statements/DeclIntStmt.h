//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_DECLINTSTMT_H
#define UNTITLED_DECLINTSTMT_H

#include "Statement.h"

class DeclIntStmt: public Statement {
private:
public:
    explicit DeclIntStmt(Operand* op1);
    void print(std::ostream& os) const override;
    void run() override;
    void compile(std::string instruction) override;
};
#endif //UNTITLED_DECLINTSTMT_H
