//código con propósitos pedagógicos

#include <iostream>
#include "lista.h"

tLista::tLista() {
    head = tail = curr = new tNodo;
    listSize = 0;   
    pos = 0;
}


// borra todos los elementos de la lista, reinicializándola vacía
void tLista::clear(){
	tNodo* temp;
	for(curr=head->sig; curr!=tail;){
		temp=curr->sig;
		delete curr;
		curr=temp;
	}
	listSize = 0;   
    pos = 0;
    tail=curr=head;
}

// inserta un elemento en la posición actual de la lista
int tLista::insert(tElemLista item) {
    tNodo* aux = curr->sig;
    curr->sig = new tNodo;
    curr->sig->info = item;
    curr->sig->sig = aux;
    if (curr == tail) tail = curr->sig;
    listSize++;
    return pos;
}

// mueve la posición actual al comienzo de la lista
void tLista::moveToStart(){ 
	curr = head; 
	pos = 0; 
}

// mueve la posición actual al final de la lista
void tLista::moveToEnd(){ 
	curr = tail; 
	pos = listSize; 
}

// mueve la posición actual al elemento anterior de la lista
// no produce cambios si está en la cabeza de la lista
void tLista::prev() {
    tNodo* temp;
    if (curr == head) 
    	return;
    temp = head;
    while (temp->sig != curr) 	
    	temp = temp->sig;
    curr = temp;
    pos--;
}

// mueve la posición actual al siguiente elemento de la lista
// no produce cambios si está en la cola de la lista
void tLista::next() { 
	if (curr != tail){ 
		curr = curr->sig; 
		pos++; 
	} 
}


// agrega un elemento al final de la lista
int tLista::append(tElemLista item){
	moveToEnd();
	tNodo* aux = curr->sig;
    curr->sig = new tNodo;
    curr->sig->info = item;
    curr->sig->sig = aux;
    tail = curr->sig;
    listSize++;
    return pos;

}


// borra el elemento actual y retorna su valor 
tElemLista tLista::erase(){
	tElemLista informacion;
	if (curr == tail)
		return -1;
	tNodo* temp = curr->sig;
	informacion=temp->info;//recupero la info
    curr->sig = curr->sig->sig;
    delete temp;
    listSize--;
    return informacion;
}

// retorna el número de elementos en la lista
int tLista::length(){
	return listSize;
}

// retorna la posición del elemento actual
int tLista::currPos(){
	return pos;
}

// mueve la posición actual a una especificada
void tLista::moveToPos(unsigned int posicion) {
    unsigned int i;
    if (posicion < 0 || posicion > listSize) return;
    curr = head;
    pos = 0;
    for (i = 0; i < posicion; i++) {
        curr = curr->sig;
        pos++;
    }
}


// obtiene el valor del elemento actual de la lista
tElemLista tLista::getValue(){
	return curr->sig->info;
}

void imprimir(tLista& l){
	int tpos = l.currPos();
	for(l.moveToStart();l.currPos()<l.length();l.next()){
 		cout << l.getValue()<< " ";   
 		//cout << l.currPos()<< "p "; 	
    }
    cout << endl;
    l.moveToPos(tpos);
}

/*
int main() {
    tLista L;
    tElemLista elem;

    //ingresar datos enteros en la lista
    for(int i=0;i<4;i++){
    	L.insert(i);	
    }

 	imprimir(L);

    //borrar lista
 	L.clear();

    //ingresar nuevamente datos enteros en la lista
    for(int i=5;i<10;i++){
    	L.insert(i);	
    }

    imprimir(L);

    elem=L.erase();// Ojo 

    cout << "borrando el: " << elem <<endl;
    imprimir(L);
    
    L.moveToPos(2);
    elem=L.erase();
    cout << "borrando el: " << elem <<endl;
    imprimir(L);
    L.append(3);
    L.append(7);
    imprimir(L);
    
    return 0;
}

*/