## Ejercicio 1

1. &i
2. &j
3. vector o &vector
4. idem anterior
5. vector + 1
6. ?

## Ejercicio 2

1.  vector + 1 es una operacion de vectores, no aritmetica
2. vector - 1 es una operacion de vectores, sera tamanio-de-tipo-de-dato bytes atras del primer elemento del arreglo en memoria
3. vector + 200 es una operacion valida, pero desconocemos el contenido de esa parte de la memoria
4. &vector + 2 - &vector = 2. Es el subindice del elemento en el arreglo

## Ejercicio 3

1. Imprimira 24, porque 8 (tamanio double) * 3 (items del array). El de enteros 4(tamanio int) * 5 (items) = 20

## Ejercicio 4

1. ? Imprime valor en el arreglo, porque no imprime direccion de memoria?

## Ejercicio 5

1. Imprime 4 porque lo interpreta como tamanio de puntero a int?
4. Ambas funciones modifican al array. param[3] accede al puntero param + 3*(tamanio tipo de dato) y escribe un 6
5. Pasar una variable por valor copia la informacion contenida, y tendremos dos instancias diferentes de la misma variable. Si es modificada solo sera modificada en el scope de la funcion. Al pasar una variable por referencia es pasar el puntero a la direccion de memoria. Por lo tanto, las modificaciones perdudaran fuera del scope de la funcion
