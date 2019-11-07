//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_PROGRAM_H
#define UNTITLED_PROGRAM_H


#include <string>
#include <vector>
#include "Statements/Statement.h"
#include "Identifiers/Identifier.h"
#include "Statements/CompStmt.h"
#include "Statements/DeclIntStmt.h"
#include "Statements/EndStmt.h"
#include "Statements/JMoreStmt.h"
#include "Statements/JumpStmt.h"
#include "Statements/PrintStmt.h"
#include "Statements/ReadStmt.h"

//TODO: Refactor in a better division of responsibilities with a Parser and maybe a Factory
class Program {
public:
    explicit Program(std::string fileName);
    void compile();
    void execute();
    void print();
    std::vector<char *> tokenizeLine(std::string compile);
private:
    std::string fileName;
    int comparisonFlag;
    std::vector<Statement*> statements;
    std::vector<Identifier*> identifiers;
    CompStmt* parseCmp(std::vector<char *> tokens);
    DeclIntStmt* parseDci(std::vector<char *> tokens);
    EndStmt* parseEnd(std::vector<char *> tokens);
    JMoreStmt* parseJmr(std::vector<char *> tokens);
    JumpStmt* parseJmp(std::vector<char *> tokens);
    PrintStmt* parsePrt(std::vector<char *> tokens);
    ReadStmt* parseRdi(std::vector<char *> tokens);
    bool validateIdentifier(std::string var);
    Identifier* getIdentifier(std::string var);
    void compileLine(std::vector<char *> tokens);
};


#endif //UNTITLED_PROGRAM_H
