
#include "Character.h"

#include <iostream>
#include <string>
using namespace std;

class Topo : public Character {
    private:
        int speed = 7;  //metros por segundo
        int capacity = 15;  //unidades de mineral 
        
    public:
        int getSpeed() {
            return speed;
        }
        int getCapacity() {
            return capacity;
        }
        string recogerMineral() {
            return "El topo recoge mineral con capacidad de " + capacity; 
        }
};