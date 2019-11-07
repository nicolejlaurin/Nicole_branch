//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_ENDSTMT_H
#define UNTITLED_ENDSTMT_H

#include "Statement.h"

class EndStmt: public Statement {
private:
public:
    EndStmt();
    void print(std::ostream& os) const override;
    void run() override;
    void compile(std::string instruction) override;
};
#endif //UNTITLED_ENDSTMT_H
