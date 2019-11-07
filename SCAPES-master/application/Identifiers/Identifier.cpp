//
// Created by Ethan Halliday on 2019-10-27.
//

#include "Identifier.h"
#include <utility>

Identifier::Identifier(std::string nameParam): name (std::move(nameParam)) {}

std::string Identifier::getName() {
    return name;
}