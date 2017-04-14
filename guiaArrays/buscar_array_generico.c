#include <stdio.h>
#include <string.h>

void* encontrar_valor(void* vector, unsigned tamElemento, unsigned tamVector, void* elemento) {
    void* actual = vector;
    while ( 
            (actual - vector) < tamVector && // mientras siga en el array
            (memcmp(actual, elemento, tamElemento) != 0) // y no sean iguales
    ) {
        actual += tamElemento; // incremento actual segun tamanio de tipo de dato
    }

    if ( (actual - vector) >= tamVector) { // si subindice mayor que tamanio
        actual = 0x0; // devuelvo 0x0
    }
    return actual; // puntero al elemento
}

int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 3};
  int x = 2;
  void* donde = encontrar_valor(a, sizeof(int), sizeof(a), &x);
  if (donde == 0x0) {
        return 0;
  }
  printf("la direccion es: 0x%x\n", donde);
  // Para derreferenciar tengo que castear (así sea un char*)
  printf("El valor apuntado : %d\n", *(int*)donde);
  return 0;
}