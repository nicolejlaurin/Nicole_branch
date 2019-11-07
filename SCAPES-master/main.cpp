//
// Created by Ethan Halliday on 2019-10-27.
//

#include "application/Statements/Statement.h"
#include "application/Identifiers/Label.h"
#include "application/Program.h"
#include "storage/FileManager.h"

int main() {

    std::string fileName = FileManager::getFilePath();
    auto* program = new Program(fileName);
    program->compile();
    program->print();

    return 0;
}

//Try to test in VM
