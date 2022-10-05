#include <iostream>
#include <unordered_map>
#include "Character.h"
#include "Explorador.h"
#include "Carguero.h"
#include "Topo.h"
#include<string>

using namespace std;

/*
unordered_map almacena elementos formados por la combinación
de clave-valor (key,value). Clave se utiliza para identificar de forma única el elemento 
y el valor que se asigna es el contenido asociado con la clave.


unordered_map funciona utilizando Hash Table,
la key que se da se convierte en índices de una Hash Table
*/

int main() {
    //declarando explorador que sea <string, int> 
    //key seria string y el valor seria
    //un entero
    unordered_map<string, int> explorador;
    Explorador explorer;
  
    //insertar valores dando la key
    explorador["velocidad"] = explorer.getSpeed();
    explorador["carga"] = explorer.getCapacity();
  
    //iterar por un unordered map
    cout << "Explorador: " << endl;
    for(auto iterar : explorador) {
      cout << iterar.first << " " << iterar.second << endl;
    }
  //------------------------------------------
    unordered_map<string, int> carguero;
    Carguero carg;
  
    //insertar valores dando la key
    carguero["velocidad"] = carg.getSpeed();
    carguero["carga"] = carg.getCapacity();
  
    //iterar por un unordered map
    cout << "Carguero: " << endl;
    for(auto iterar : carguero) {
      cout << iterar.first << " " << iterar.second << endl;
    }

    //------------------------------------------
    unordered_map<string, int> topo;
    Topo top;
  
    //insertar valores dando la key
    topo["velocidad"] = top.getSpeed();
    topo["carga"] = top.getCapacity();
  
    //iterar por un unordered map
    cout << "Topo: " << endl;
    for(auto iterar : topo) {
      cout << iterar.first << " " << iterar.second << endl;
    }
    /*
    unordered_map es más rápido que un map, ya que utiliza una 
    hash table, mientras que un mapa se implementa usando un 
    árbol binario llamado Red-black tree
    */
    
    return 0;
}