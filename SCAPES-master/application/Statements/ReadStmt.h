//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_READSTMT_H
#define UNTITLED_READSTMT_H

#include "Statement.h"

class ReadStmt: public Statement {
private:
public:
    explicit ReadStmt(Operand* op1);
    void print(std::ostream& os) const override;
    void run() override;
    void compile(std::string instruction) override;
};
#endif //UNTITLED_READSTMT_H
