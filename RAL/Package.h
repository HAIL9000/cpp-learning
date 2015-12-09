//
// Created by Hailee Kenney on 12/8/15.
//

#ifndef RAL_PACKAGE_H
#define RAL_PACKAGE_H
#include "Resource.h"

class Package : Resource {

private:
    std::string version_;
    std::string source_;

public:
    Package(std::string name, Ensure ensure, std::string version, std::string source) :
            Resource(name, ensure),
            version_(std::move(version)),
            source_(std::move(source)){};

    std::string print() override;
};


#endif //RAL_PACKAGE_H
