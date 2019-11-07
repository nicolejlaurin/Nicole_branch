//
// Created by Ethan Halliday on 2019-10-27.
//

#include <iostream>
#include <cstring>
#include <fstream>
#include "Program.h"

void Program::compile() {
    std::ifstream input( fileName );
    std::string line;

    while (std::getline(input, line))
    {
        std::string lineWithoutComments = line.substr(0, line.find('#', 0));
        if (lineWithoutComments.length() > 1) {
            compileLine(tokenizeLine(lineWithoutComments));
        }
    }
}

JMoreStmt *Program::parseJmr(std::vector<char *> tokens) {
    if (tokens.size() != 2) {
        std::cout << "Failed to compile: Jmr statement requires 1 operand.";
        exit(1);
    }
    auto* identifier = new Identifier(std::string(tokens[1]));
    identifiers.push_back(identifier);
    auto* op1 = new Operand(identifier);
    return new JMoreStmt(op1);
}

PrintStmt *Program::parsePrt(std::vector<char *> tokens) {
    if (tokens.size() != 2) {
        std::cout << "Failed to compile: Prt statement requires 1 operand.";
        exit(1);
    }
    if (validateIdentifier(std::string(tokens[1]))) {
        auto *op1 = new Operand(getIdentifier(std::string(tokens[1])));
        return new PrintStmt(op1);
    } else {
        std::cout << "Failed to compile: Prt statement was given undeclared variable: " << std::string(tokens[1]) << std::endl;
        exit(1);
    }

}

CompStmt *Program::parseCmp(std::vector<char *> tokens) {
    if (tokens.size() != 3) {
        std::cout << "Failed to compile: Cmp statement requires 2 operands.";
        exit(1);
    }

    if (validateIdentifier(std::string(tokens[1])) && validateIdentifier(std::string(tokens[2]))) {
        auto* op1 = new Operand(getIdentifier(std::string(tokens[1])));
        auto* op2 = new Operand(getIdentifier(std::string(tokens[2])));
        return new CompStmt(op1, op2);
    } else {
        std::cout << "Failed to compile: Cmp statement given undeclared operands: " << std::string(tokens[1]) << " and " << std::string(tokens[2]) << std::endl;
        exit(1);
    }
}

EndStmt *Program::parseEnd(std::vector<char *> tokens) {
    if (tokens.size() != 1) {
        std::cout << "Failed to compile: End statement does not take any operands.";
        exit(1);
    }
    return new EndStmt();
}

DeclIntStmt *Program::parseDci(std::vector<char *> tokens) {
    if (tokens.size() != 2) {
        std::cout << "Failed to compile: Dci statement requires 1 operand.";
        exit(1);
    }
    auto* identifier = new Identifier(std::string(tokens[1]));
    identifiers.push_back(identifier);
    auto* op1 = new Operand(identifier);
    return new DeclIntStmt(op1);
}

JumpStmt *Program::parseJmp(std::vector<char *> tokens) {
    if (tokens.size() != 2) {
        std::cout << "Failed to compile: Jmp statement requires 1 operand.";
        exit(1);
    }
    auto* identifier = new Identifier(std::string(tokens[1]));
    identifiers.push_back(identifier);
    auto* op1 = new Operand(identifier);
    return new JumpStmt(op1);
}

ReadStmt *Program::parseRdi(std::vector<char *> tokens) {
    if (tokens.size() != 2) {
        std::cout << "Failed to compile: Rdi statement requires 1 operand.";
        exit(1);
    }

    if (validateIdentifier(std::string(tokens[1]))) {
        auto* identifier = new Identifier(std::string(tokens[1]));
        identifiers.push_back(identifier);
        auto* op1 = new Operand(identifier);
        return new ReadStmt(op1);
    } else {
        std::cout << "Failed to compile: Rdi given undeclared operand: " << std::string(tokens[1]) << std::endl;
        exit(1);
    }

}

void Program::execute() {

}

void Program::print() {
    for(auto const& value: statements) {
        std::cout << *value << std::endl;
    }
}

Program::Program(std::string file): fileName(file), comparisonFlag(0) {

}

bool Program::validateIdentifier(std::string var) {
    for (auto const& value: identifiers) {
        if (value->getName() == var) {
            return true;
        }
    }
    return false;
}

Identifier* Program::getIdentifier(std::string var) {
    for (auto const& value: identifiers) {
        if (value->getName() == var) {
            return value;
        }
    }
    return nullptr;
}

std::vector<char *> Program::tokenizeLine(std::string compile) {
    std::vector<char*> tokens;
    char *cstr = &compile[0];
    for (char *p = strtok(cstr," "); p != nullptr; p = strtok(nullptr, " "))
    {
        tokens.push_back(p);
    }
    return tokens;
}

void Program::compileLine(std::vector<char *> tokens) {
    char* firstToken = tokens[0];
    if (strcmp(firstToken, "dci") == 0) {
        statements.push_back(parseDci(tokens));
    } else if (strcmp(firstToken, "rdi") == 0) {
        statements.push_back(parseRdi(tokens));
    } else if (strcmp(firstToken, "prt") == 0) {
        statements.push_back(parsePrt(tokens));
    } else if (strcmp(firstToken, "cmp") == 0) {
        statements.push_back(parseCmp(tokens));
    } else if (strcmp(firstToken, "jmr") == 0) {
        statements.push_back(parseJmr(tokens));
    } else if (strcmp(firstToken, "jmp") == 0) {
        statements.push_back(parseJmp(tokens));
    } else if (strcmp(firstToken, "end") == 0) {
        statements.push_back(parseEnd(tokens));
    } else if (firstToken[(strlen(firstToken) - 1)] == ':') { //Check if last character is : for labels
        identifiers.push_back(new Identifier(std::string(firstToken)));
    } else {
        std::cout << "Failed to compile: Invalid command found: " << firstToken << std::endl;
        exit(1);
    }
}