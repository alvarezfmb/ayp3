#include <stdio.h>

int main(int argc, char** argv) {
  char vector[] = { 0x9, 32, 25, 010 /* octal */, 200, 07 };

  char* p = 0;
  char* q = 0x0;

  if ( p == q ) {
    printf("q y p son iguales1\n");
  }

  p = vector + 0x6;
  q = vector;

  p = vector + 5;

  if ( p == q ) {
    printf("q y p son iguales2\n");
  }

  printf("%s\n", "some");

  char* r = vector + 10;
  printf("%c", *r);

  return 0;
}