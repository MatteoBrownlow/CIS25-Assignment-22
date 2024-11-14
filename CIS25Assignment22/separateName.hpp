
#ifndef separateName_hpp
#define separateName_hpp

#include <iostream>

void separateName(std::string fullName, int space, int nameLength);
namespace myNamespace{
    using std::string, std::cout, std::endl;
}

#endif
