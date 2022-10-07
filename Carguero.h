
#include "Character.h"

#include <iostream>
#include <string>
using namespace std;

class Carguero : public Character {

    private:
        int speed = 10;  //metros por segundo
        int capacity = 40;  //unidades de mineral 
        
    public:
        int getSpeed() {
            return speed;
        }
        int getCapacity() {
            return capacity;
        }
        string recogerMineral() {
            return "El carguero recoge mineral con capacidad de " + capacity; 
        }
};