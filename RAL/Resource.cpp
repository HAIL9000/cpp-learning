//
// Created by Hailee Kenney on 12/8/15.
//

#include "Resource.h"
#include <iostream>

Resource::Resource(std::string name, Resource::Ensure ensure) : name_(std::move(name)) {

    switch(ensure) {
        case (Resource::Ensure::Present) :
            setEnsure("Present");
            break;
        case (Resource::Ensure::Absent) :
            setEnsure("Absent");
            break;
    }
}

std::string Resource::print() {
    return "Resource name: " + name_ + "\nEnsure: " + ensure_;
}
