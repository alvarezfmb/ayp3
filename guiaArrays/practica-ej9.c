#include <stdlib.h>
#include <string.h>

int buscar(char* array, char* buscado, unsigned volumen, unsigned tamArray) {
  int i = 0;
  while (tamArray) {
    if (!memcmp(array, buscado, volumen)) {
      return i;
    }
    i++;
    array += volumen;
    tamArray -= volumen;
  }
  return -1;
}

int main(int argc, char const *argv[])
{
  char* a[] = {"hola", "mundo", "untref"};
  char* b = "untref";
  int x = buscar(a, &b, sizeof(char*), sizeof(a));
  printf("%d\n", x);
  return 0;
}