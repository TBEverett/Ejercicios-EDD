
#include <iostream>
using namespace std;

int main(){
    // Definimos una variable a.
    int a = 2;

    // Imprimimos el valor de a.
    cout << a << endl;

    // Imprimimos la dirección de memoria de a.
    cout << &a << endl;
    
    // Definimos un puntero que apunta a la dirección de memoria de a.
    int* ptr = &a; 

    // Usando el puntero, imprimimos la dirección de memoria de a.
    cout << ptr << endl; //Lease: ptr es el valor del puntero. Todo puntero almacena una dirección de memoria.
    
    // Usando el puntero, imprimimos el valor de a.
    cout << *ptr << endl; //Lease: *ptr es el valor almacenado en la dirección de memoria a la que apunta el puntero
    
    // Imprimimos la dirección de memoria del puntero
    cout << &ptr << endl; //Lease: Como un puntero no es más que una variable, también debe ser almacenada en alguna parte.
    
}
