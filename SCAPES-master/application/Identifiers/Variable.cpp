//
// Created by Ethan Halliday on 2019-10-27.
//

#include "Variable.h"

#include <utility>

Variable::Variable(std::string nameParam, int valueParam):
    Identifier {std::move(nameParam)},
    value(valueParam) {};

int Variable::getValue() {
    return value;
}