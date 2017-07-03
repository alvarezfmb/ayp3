#include <stdlib.h>
#include <string.h>

void copiar_desde_hasta(char* array, char* destino, unsigned desde, unsigned hasta, unsigned volumen, unsigned tamArray) {
  array += desde*volumen;
  int limite = (hasta-desde)*volumen;
  while (limite) {
    memcpy(destino, array, volumen);
    limite--;
    array++;
    destino++;
  }
}




int main(int argc, char const *argv[])
{
  int a[] = {1, 2, 3, 4, 5};
  int b[2];
  copiar_desde_hasta(a, b, 1, 3, sizeof(int), sizeof(a));
  for (int i = 0; i < 2; ++i)
  {
    printf("%d\n", b[i]);
  }
  return 0;
}