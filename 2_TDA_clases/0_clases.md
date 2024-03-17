## Abstracción, TDA y Clases

#### Abstracción
1. Define la abstracción y proporciona un ejemplo de abstracción en programación.
2. ¿Cómo ayuda la abstracción a gestionar la complejidad en el desarrollo de software?


Clases en C++:
1. ¿Qué es una clase en C++?
2. Considerando el concepto de constructores y destructores en las clases de C++
   1. ¿Porque son necesarios?
   2. ¿Como se llaman en un código? 
3. Añadir al código las siguientes funcionalidades:
   1. Como la variable nombre es privada, no podemos acceder a ella desde fuera de la clase. Agregar un método 'get_name()' que retorne el nombre del Animal.
   2. Agregar un método 'update()' que acepte un nuevo nombre y edad y actualice los valores de Animal.
   3. Crear una función 'create_animals()' (no un método de Animal) que acepte un entero $n$ y que produzca un arreglo de Animales de largo $n$ donde los nombres son "1","2","3"... y las edades son 1,2,3... 
   
   ```
    #include <iostream>
    #include <string>
    using namespace std;

    class Animal{
        private:

        string nombre;
        int edad;
        
        public:
        Animal(){
            nombre = "Monkey";
            edad = 6
        }

        string get_name(){
            return nombre
        }
    }
   ```
4. Escribir una clase llamada Arreglo, que contenga tres atributos: Un arreglo enteros, su largo actual, y su largo máximo.
   1. Definir su constructor, que pedirá memoria para 10 enteros en el arreglo, definirá su largo como 0 y su largo máximo como 10.
   2. Definir un método 'agregar', que aceptará un elemento y lo añadirá al final de arreglo. Nota: Si el arreglo está lleno, debe crear un nuevo arreglo del doble de largo, copiar los elementos de primero al segundo, y guardar el segundo como el nuevo arreglo.
   3. Definir un método 'remover', que aceptará un índice y eliminará dicho elemento, desplazando todos los elementos derechos a la izquierda con tal de que no queden espacios 'vacios' en el arreglo. 


