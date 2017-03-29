#include <stdio.h>

void inicializarArray(char* elementos, unsigned cantidad){
  while (cantidad != 0) {
    cantidad--;
    *elementos = 0x0;
    elementos++;
  }
}

int main(int argc, char *argv[])
{
  int enteros[4];
  inicializarArray(enteros, sizeof(enteros));
  for (int i = 0; i < 4; ++i)
  {
    printf("%d\n", enteros[i]);
  }
  return 0;
}

