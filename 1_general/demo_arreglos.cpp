


#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};

    cout << "Valores: " << endl;
    //Con este for, imprimimos los valores del arreglo
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }

    cout << "Direcciones: " << endl;
    //Con este for, imprimimos las direcciones de memoria
    //de las celdas del arreglo
    for(int i = 0; i < 5; i++){
        cout << &arr[i] << endl;
    }
    
    // ¿Que patrón vemos en las direcciónes?
    // ¿Como se conecta con el tamaño de un int?

    //Ahora lo mismo, pero con chars

    cout << "\nCon chars: " << endl;

    char arr2[5] = {'a','b','c','d','e'};

    cout << "Valores: " << endl;
    //Con este for, imprimimos los valores del arreglo
    for(int i = 0; i < 5; i++){
        cout << arr2[i] << endl;
    }

    cout << "Direcciones: " << endl;
    //Con este for, imprimimos las direcciones de memoria
    //de las celdas del arreglo
    for(int i = 0; i < 5; i++){
        printf("%x\n",&arr2[i]);
    }
}

// Usamos printf en vez de cout en el último caso porque
// cout esta programado para entregar el string completo a partir
// de la iésima celda en vez de la dirección de memoria.