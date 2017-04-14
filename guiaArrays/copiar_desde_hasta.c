#include <stdio.h>

// inicio inclusivo, final exclusivo
void copiar_desde_hasta(char* src, char* dst, unsigned i, unsigned f, unsigned volumenTipoDeDato) {
  src += i*volumenTipoDeDato;
  for (int j = 0; j < (f - i)*volumenTipoDeDato; j++) {
    *dst = *src;
    src++;
    dst++;
  }
}


int main(int argc, char** argv) {
    int enteros_src[] = {1, 2, 3, 4, 5};
    int enteros_dst[3];
    copiar_desde_hasta(enteros_src, enteros_dst, 1, 3, sizeof(int));
    for (int x = 0; x < 4; x++) {
      printf("%d\n", enteros_dst[x]);
    }
}