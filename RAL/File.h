//
// Created by Hailee Kenney on 12/8/15.
//

#ifndef RAL_FILE_H
#define RAL_FILE_H
#include "Resource.h"


class File : Resource {

private:
    std::string path_;
    std::string source_;

public:
    File(std::string name, Ensure ensure, std::string path, std::string source) :
            Resource(name, ensure),
            path_(std::move(path)),
            source_(std::move(source)){};

    std::string print() override;
};


#endif //RAL_FILE_H
