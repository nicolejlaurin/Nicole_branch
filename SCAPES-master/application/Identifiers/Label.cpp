//
// Created by Ethan Halliday on 2019-10-27.
//

#include "Label.h"
#include <utility>

Label::Label(std::string nameParam): Identifier {std::move(nameParam)} {};