//
// Created by Ethan Halliday on 2019-10-27.
//

#ifndef UNTITLED_IDENTIFIER_H
#define UNTITLED_IDENTIFIER_H


#include <string>
#include <utility>

class Identifier {
public:
    explicit Identifier(std::string nameParam);
    std::string getName();
protected:
    std::string name;
};


#endif //UNTITLED_IDENTIFIER_H
