#include <iostream>
#define tElemLista int
#define MAXSIZE 10

using namespace std;

class tLista {
    unsigned int maxSize; // tamaño máximo de la lista
    unsigned int listSize; // tamaño actual de la lista
    unsigned int curr; // posición actual de la lista
    tElemLista* listArray; // arreglo con los elementos de la lista
public:
    // inicializa una lista como vacía
    tLista() {
        maxSize = MAXSIZE; // tamaño máximo de la lista
        listSize = 0; // lista vacía
        curr = 0;
        listArray = new tElemLista[maxSize];
    }
    // borra todos los elementos de la lista, reinicializándola vacía
    void clear() {
        listSize = curr = 0;
    }

    // inserta un elemento en la posición actual de la lista
    int insert(tElemLista item) {
        if (listSize >= maxSize)
            return -1; //lista llena, no se inserta
        int i;
        for (i = listSize; i > curr; i--)
            listArray[i] = listArray[i-1];
        listArray[i] = item;
        listSize++;
        return i; // retorna posición de inserción
    }
    // agrega un elemento al final de la lista
    int append(tElemLista item) {
        if (listSize >= maxSize)
            return 0; //lista llena, no se inserta
        listArray[listSize++] = item;
        return 1; // inserción exitosa
    }

    // borra el elemento actual y retorna su valor
    tElemLista erase() {
        tElemLista item;
        int i;
        if (curr < 0 || curr >= listSize)
            return -1;
        item = listArray[curr];
        for (i = curr; i < listSize-1; i++)
            listArray[i] = listArray[i+1];
        listSize--;
        return item;
    }

    // mueve la posición actual al comienzo de la lista
    void moveToStart() { curr = 0; }

    // mueve la posición actual al final de la lista
    void moveToEnd() { curr = listSize; }

    // mueve la posición actual al elemento anterior de la lista
    void prev() { if (curr != 0) curr--; }

    // mueve la posición actual al elemento siguiente de la lista
    void next() { if (curr < listSize) curr++; }

    // destructor, libera la memoria asociada
    ~tLista() { delete[] listArray; }

    // Implementar en C++ las operaciones length(), currPos(), moveToPos() y getValue()
};