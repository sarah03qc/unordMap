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
    //declarando explorador que sea <string, Character> 
    //key seria string y el valor seria
    //un objeto character
    unordered_map<string, Character*> elMap;
    Explorador explorer;
    Carguero carg;
    Topo top;

    //insertar valores dando la key
    elMap["explorador"] = &explorer;
    elMap["carguero"] = &carg;
    elMap["topo"] = &top;
  
    //iterar por un unordered map
    cout << "Implementacion: " << endl;
    for(auto iterar : elMap) {
      int veloc = iterar.second->getSpeed();
      //cout << veloc << endl;
      cout << iterar.first << " " << iterar.second->recogerMineral() << endl;
    }
  /*
    unordered_map es más rápido que un map, ya que utiliza una 
    hash table, mientras que un mapa se implementa usando un 
    árbol binario llamado Red-black tree
    */
    
    return 0;
}