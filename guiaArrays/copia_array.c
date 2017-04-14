#include <stdio.h>

void copia_array(char* origen, char* destino, unsigned cantidad) {
  while(cantidad) {
    *destino = *origen;
    destino++;
    origen++;
    cantidad--;
  }
}

int main()
{
    float a[] = { 1.1, 2.2, 3.3 };
    float b[3];

    copia_array(&a, &b, sizeof(a));

    for (int i = 0; i < 3; ++i)
    {
      printf("%f\n", b[i]);
    }

    return 0;
}