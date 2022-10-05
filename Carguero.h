
#include "Character.h"

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
};