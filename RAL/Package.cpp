//
// Created by Hailee Kenney on 12/8/15.
//

#include "Package.h"

std::string Package::print() {

    return Resource::print() + "\nVersion: " + version_ + "\nSource: " + source_;

};
