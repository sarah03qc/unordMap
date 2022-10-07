#ifndef CHARACTER

#define CHARACTER 1

#include <iostream>
#include <string>

using namespace std;

class Character {
    
    public:
        virtual int getSpeed() = 0;
        virtual int getCapacity() = 0;
        virtual string recogerMineral() = 0;
            
};

#endif //