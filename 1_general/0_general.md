## Programación General en C++

1. Programar una función que retorne verdadero cuando el string ingresado sea un palíndromo, y falso cuando no lo es.

2. Numeros primos:
   1. Escribir una función que determine si un número es primo o no.
   2. Luego, escribir una función que acepte un arreglo de enteros y retorne la cantidad de numeros primos que contiene
   3. ¿Como modificamos la función anterior para que retorne un arreglo de los primos encontrados?

3. Structs:
   1. Definir un struct para representar números complejos.
   2. Escribir un programa que reciba información por entrada estándar para construir un numero complejo y lo imprima.
   3. Escribir una función para multiplicar dos números complejos. 

4. Recursion:
   1. Escribir una función recursiva que acepte un entero $n$ y retorne verdadero si es una potencia de dos.
   2. Escribir una función recursiva que calcule el n-ésimo término de la secuencia de Fibonacci, definida como:
      ```
      F(0) = 0 
      F(1) = 1 
      F(n) = F(n-2) + F(n-1) 
      ```

5. Memoria dinámica y punteros:
   1. ¿Como se almacenan los elementos de un arreglo en memoria? (Ver archivo arreglos.cpp)
   2. Escribir un programa que defina un arreglo de largo 10 con valores aleatorios en 
   $[1,10]$. Luego, escribir una funcion 'remover()' que acepte el arreglo y un valor y elimine el valor del arreglo usando punteros. Tras remover el elemento, el resto de los elementos del arreglo deben ser desplazados con tal que no queden espacios vacíos.

6. Archivos:
   1. Adjunto hay un archivo llamado 'shrek.txt'. Escribir un programa que cuente la cantidad de veces que aparece la palabra "Shrek" (con mayúscula) en el archivo. Deberían ser 593.
   2. Escribir un programa que defina un struct 'Par' de dos enteros, cree un arreglo de 'Par' de largo 100 y llene los valores de cada 'Par' con números aleatorios. Luego, escribir una función 'write()' que acepte el arreglo y lo escriba a un archivo binario, y una función 'read()' que acepte un nombre de archivo y genere nuevamente un arreglo de 'Par' con sus contenidos.