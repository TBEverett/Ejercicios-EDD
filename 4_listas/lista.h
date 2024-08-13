#include<iostream>

typedef int tElemLista;   // lista de int

using namespace std;

struct tNodo{
  tElemLista info;
  tNodo* sig;
};

class tLista{
private:
    tNodo* head;
    tNodo* tail;
    tNodo* curr;
    unsigned int listSize;
    unsigned int pos; // posicion actual en la lista

public:
	tLista(); //constructor

	// borra todos los elementos de la lista, reinicializándola vacía
	void clear();

	// inserta un elemento en la posición actual de la lista
	int insert(tElemLista item);

	// agrega un elemento al final de la lista
	int append(tElemLista item);

	// borra el elemento actual y retorna su valor 
	tElemLista erase();

	// mueve la posición actual al comienzo de la lista
	void moveToStart();

	// mueve la posición actual al final de la lista
	void moveToEnd();

	// mueve la posición actual al siguiente elemento de la lista
	// no produce cambios si está en la cola de la lista
	void next();

	// mueve la posición actual al elemento anterior de la lista
	// no produce cambios si está en la cabeza de la lista
	void prev();

	// retorna el número de elementos en la lista
	int length();

	// retorna la posición del elemento actual
	int currPos();

	// mueve la posición actual a una especificada
	void moveToPos(unsigned int pos);

	// obtiene el valor del elemento actual de la lista
	tElemLista getValue();

};


