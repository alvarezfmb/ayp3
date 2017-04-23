#include <stdio.h>
#include <string.h>

typedef struct _Parrafo {
  char** palabras;
  unsigned cantidad;
  // char x;
  // char y;
} Parrafo;

void parrafo_initcializar(Parrafo* this) {
  memeset(this, 0x0, sizeof(Parrafo));
}

void parrafo_mostrar(Parrafo* this) {
  printf(" cantidad %d\n", this->cantidad);
  if (!this->palabras) {
    printf("no hay palabras\n");
    return;
  }
  printf("palabras: %s\n", *this->palabras);
}

int main(int argc, char const *argv[])
{
  Parrafo p;
  // printf("%lu\n", sizeof(p)); // 16
  // printf("%lu\n", sizeof(&p)); // 8
  // printf("%lu\n", sizeof(struct Parrafo)); // 16
  parrafo_initcializar(&p);
  parrafo_mostrar(&p);
  return 0;
}