#include <stdio.h>
int main() {
  int enteros[] = { 1, 2, 3, 4, 7, 78, 174 };
  int simple = 32;
  int radio = 4;
  int* p;
  int* q;
  int* r;
  
  p = enteros + 6 ;
  q = &simple;
  r = q;

  *r = 115;

  r = &radio;

  *p = radio;

  p = r;
  q = enteros;

  *(q+ 4) = 0;
  // for (int i = 0; i < 8; ++i)
  // {
  //   printf("%d\n", enteros[i]);
  // }
  *p = 0;

  r = q + 1;

  q - r;


  p = enteros + 3;

  q - p;
  printf("%p\n", q - p);

  return 0;
}


