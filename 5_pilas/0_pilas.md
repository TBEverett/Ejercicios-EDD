## Pilas

1. Se quiere programar una calculadora que lee una secuencia de símbolos y produce un resultado. La calculadora mantiene una pila como registro, y opera sobre ella. Los inputs posibles son:
    1. $x$, agrega $x$ al registro.
    2. $+$ suma los dos últimos valores del registro, y agrega el resultado al registro
    3. $D$ duplica el último registro, y agrega dicho valor al registro.
    4. $E$ elimina el último registro.
   
   La función deberá aceptar un arreglo que corresponde a la secuencia de inputs, y deberá retornar la suma de todos los elementos del registro luego de haber aplicado la secuencia de inputs.

   Ej: \
   operaciones = ["5","2","C","D","+"] \
   Registro inicial = [] \
   Luego de leer "5": [5] \
   Luego de leer "2": [5,2] \
   Luego de leer "C": [5] \
   Luego de leer "D": [5,10] \
   Luego de leer "+": [5,10,15] \
   Finalmente, la función retorna 30 (5 + 10 + 15)