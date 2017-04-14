#include <stdio.h>

void iterar_enteros(int* array, unsigned cantidad) {
  while(cantidad) {
    printf("%d\n", *array);
    array++;
    cantidad -= 4;
  }
}

void iterar_flotantes(float* array, unsigned cantidad) {
  while(cantidad) {
    printf("%f\n", *array);
    array++;
    cantidad -= sizeof(float);
  }
}

// void iterar_generico(char* array, unsigned cantidad, unsigned volumen_tipo_de_dato) {
//   while(cantidad) {
//     printf("%f\n", (float) *array);
//     array += volumen_tipo_de_dato;
//     cantidad -= volumen_tipo_de_dato;
//   }
// }


int main(int argc, char const *argv[])
{
  int enteros[] = {1, 2, 3};
  iterar_enteros(enteros, sizeof(enteros));
  float flotantes[] = {1.1, 2.2};
  // iterar_flotantes(x, sizeof(x));
  iterar_generico(flotantes, sizeof(flotantes), sizeof(float));
  return 0;
}