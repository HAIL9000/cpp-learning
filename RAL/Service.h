//
// Created by Hailee Kenney on 12/8/15.
//

#ifndef RAL_SERVICE_H
#define RAL_SERVICE_H
#include "Resource.h"


class Service : Resource {

private:
    bool enable_;

public:
    Service(std::string name, Ensure ensure, bool enable) :
            Resource(name, ensure),
            enable_(std::move(enable)){};

    std::string print() override;
};


#endif //RAL_SERVICE_H
