#include "separateName.hpp"
using namespace myNamespace;

void separateName(string fullName, int space, int nameLength){
    string firstName = fullName.substr(0, space);
    string lastName = fullName.substr(space + 1, nameLength - 1);
    cout << firstName << endl;
    cout << lastName << endl;
}
