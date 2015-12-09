//
// Created by Hailee Kenney on 12/8/15.
//

#include "File.h"

std::string File::print() {

    return Resource::print() + "\nFile Path: " + path_ + "\nSource: " + source_;

};
