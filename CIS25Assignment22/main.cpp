#include <iostream>
#include <string>
#include "separateName.hpp"
using namespace myNamespace;

int main(){
    string fullName = "matteo brownlow";
    int space = 0;
    int nameLength = 0;
    while(true){
        if(fullName[space] == ' '){
            break;
        }
        space++;
    }
    while(true){
        if(fullName[nameLength] == '\0'){
            break;
        }
        nameLength++;
    }
    separateName(fullName, space, nameLength);
    return 0;
}
