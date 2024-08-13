#include <iostream>
typedef int tipoElem;
using namespace std;

struct tNodoArbolBin{
    tipoElem info;
    tNodoArbolBin* izq;
    tNodoArbolBin* der;
};


class tABB {
    public: 

    tNodoArbolBin *raiz; // puntero al nodo raíz del ABB
    int nElems; // cantidad de elementos en el ABB

    tABB(){
        raiz = NULL;
        nElems = 0;
    }
    // Tarea: insert()
    // Inserción debe mantener orden del arbol
    void insert(tipoElem elemento){
        insertHelp(raiz,elemento);
    }
    void insertHelp(tNodoArbolBin* &raiz, tipoElem elemento){
        if (raiz == NULL){
            raiz = new tNodoArbolBin;
            raiz -> info = elemento;
            raiz -> izq = NULL;
            raiz -> der = NULL;
            nElems++;
        }
        if (elemento < raiz -> info){
            insertHelp(raiz -> izq, elemento);
        }
        else if (elemento > raiz -> info){
            insertHelp(raiz -> der, elemento);  
        }

    }

    // elimina todos los elementos de un ABB T, dejándolo vacío
    void clear() {
        clearHelp(raiz); // función auxiliar para eliminar los nodos
        raiz = NULL;
        nElems = 0;
    }
    // función auxiliar recursiva para eliminar los nodos del árbol
    void clearHelp(tNodoArbolBin *nodo) {
        if (nodo == NULL) return; // árbol vacío, se detiene
        clearHelp(nodo->izq); // visita subárbol izquierdo recursivamente
        clearHelp(nodo->der); // visita subárbol derecho recursivamente
        delete nodo; // después de borrar subárboles, se borra a sí mismo
    }

    // recorrido in-orden de un ABB T
    void inOrden () {
        if (raiz == NULL) cout << "Arbol vacio" << endl;
        inOrdenHelp (raiz);
        cout << endl;
    }
    void inOrdenHelp (tNodoArbolBin *nodo) {
        if (nodo == NULL) return;
        inOrdenHelp (nodo->izq); // visita hijo izquierdo en in-orden
        cout << nodo->info; // procesa nodo actual
        inOrdenHelp (nodo->der); // visita hijo derecho en in-orden
    }

    // busca un "item" en un ABB T, retorna 0 en caso de no encontrarlo
    int find(tipoElem item) {
        return findHelp(raiz, item);
    }
    int findHelp(tNodoArbolBin *nodo, tipoElem item) {
        if (nodo == NULL) return 0; // item no está en el ABB
        if (nodo->info == item) return 1; // item encontrado
        if (item < nodo->info)
        return findHelp(nodo->izq, item);
        else
        return findHelp(nodo->der, item);
    }

};

int main(){
    tABB arbol;
    arbol.insert(5);
    arbol.insert(3);
    arbol.insert(6);
    arbol.insert(1);

    arbol.inOrden();

    arbol.clear();
    arbol.inOrden();

}