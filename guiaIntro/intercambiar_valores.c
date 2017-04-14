#include <stdio.h>

/*
* Recibe dos punteros a variables (a, b) y el volumen del tipo
* de dato de ellas. Intercambia los valores.
*/

void intercambiar(char* a, char* b, unsigned dataTypeSize) {
  while (dataTypeSize) {
    dataTypeSize--;
    char tmp = *a;
    *a = *b;
    *b = tmp;
    a++;
    b++;
  }
}

int main(int argc, char const *argv[]) {
  float x = 2.45;
  float y = 3.141516;
  intercambiar(&x, &y, sizeof(float));
  printf("%f\n", x);
  printf("%f\n", y);
  return 0;
}