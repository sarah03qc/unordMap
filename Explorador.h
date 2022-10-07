
#include "Character.h"

#include <iostream>
#include <string>
using namespace std;

class Explorador : public Character {

    private:
        int speed = 20;  //metros por segundo
        int capacity = 8;  //unidades de mineral 

    public:
        int getSpeed() {
            return speed;
        }
        int getCapacity() {
            return capacity;
        }
        string recogerMineral() {
            string str = "El explorador recoge mineral con capacidad de " + capacity; 
            return str; 
        }
};