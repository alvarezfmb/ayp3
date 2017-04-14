#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenar_cadena(char* a, char* b, char* dst) {
  while(*a != '\0') {
    *dst = *a;
    a++;
    dst++;

  }
  while(*b != '\0') {
    *dst = *b;
    b++;
    dst++;
  }
  dst++;
  *dst = '\0';
}

int main(int argc, char const *argv[])
{
  char a[] = "un";
  char b[] = "tref";
  char* dst;
  dst = malloc(sizeof(char) * 7); // solo necesito un '\0', reservo longitud + 1
  concatenar_cadena(a, b, dst);
  printf("%s\n", dst);
  free(dst);
  return 0;
}