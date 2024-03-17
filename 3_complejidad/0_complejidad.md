
## Complejidad Temporal

1. ¿Cual es la complejidad temporal de imprimir todos los elementos de un arreglo unidimensional?
2. Determine el orden de complejidad temporal del siguiente algoritmo:
   ```C++
    int mid_element(int arr[], int n) {
        if (n >= 1) {
            return arr[n/2];
        }
        return -1;
    }
   ```
3. ¿Cual es la complejidad temporal de sumar todas las celdas de una matriz bidimensional?
4. ¿Cual es la complejidad temporal de sumar todas las celdas de la diagonal de una matriz bidimensional?
5. Determine el orden de complejidad temporal del siguiente algoritmo:
   ```C++
    void crazy_print(int arr[], int n){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                for (int k = 0; k <= j; k++){
                    cout << arr[k];
                }
                cout << " " << endl;
            }
            cout << endl;
        }
    }
   ```