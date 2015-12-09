#include <iostream>
#include "Resource.h"
#include "Package.h"
#include "Service.h"
#include "File.h"

using namespace std;

int main() {

    cout << "\n";

    cout << "Let's print out some resources! \n\n";

    cout << "\n\n-------- \n\n";

    //Create and print a Package
    Package some_package("Package 1", Resource::Ensure::Present, "2.0.1", "Package source");
    cout << some_package.print();

    cout << "\n\n-------- \n\n";

    //Create and print a Service
    Service some_service("Service 1", Resource::Ensure::Absent, true);
    cout << some_service.print();

    cout << "\n\n-------- \n\n";

    //Create and print a File
    File some_file("File 1", Resource::Ensure::Present, "some/path/i/guess", "File source");
    cout << some_file.print();

    cout << "\n";

    return 0;
}