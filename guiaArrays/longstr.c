#include <stdio.h>

int longitud_string(char* str) {
  int i = 0;
  while (*str != '\0') {
    i++;
    str++;
  }
  return i;
}

int main(int argc, char const *argv[]) {
  char palabra[] = "murcielago";
  int lg = longitud_string(palabra);
  printf("%d\n", lg);
  return 0;
}