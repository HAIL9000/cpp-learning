//
// Created by Hailee Kenney on 12/8/15.
//

#ifndef RAL_RESOURCE_H
#define RAL_RESOURCE_H

#include <string>

class Resource {

public:
    virtual std::string print ();
    std::string getEnsure () {return ensure_;};
    void setEnsure(std::string ensure) {ensure_ = ensure;};

    enum class Ensure { Present, Absent };

private:
    std::string name_;
    std::string ensure_;

protected:
    Resource(std::string name, Resource::Ensure ensure);

};


#endif //RAL_RESOURCE_H
