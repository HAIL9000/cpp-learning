//
// Created by Hailee Kenney on 12/8/15.
//

#include "Service.h"

std::string Service::print() {

    return Resource::print() + "\nEnable: " + std::to_string(enable_);

};
