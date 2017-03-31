#include <stdio.h>

void otro(char* elementos, unsigned cantidad){
  while (cantidad != 0) {
    cantidad--;
    *elementos = 0x0;
    elementos++;
  }
}

void copiarArray(char* elementos, int size)
{
  int enteros[size/4];
  char* pa = &enteros;
  for (int i = 0; i < pa; ++i)
  {
    
  }

  // for (int i = 0; i < sizeof(a); ++i)
  // {
  //   *arrayA = *arrayB;
  //   arrayA++;
  //   arrayB++;
  // }
}

int main(int argc, char *argv[])
{
  int a[] = { 1,2,3 };
  copiarArray(a, sizeofa(a));

  for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
  {
    printf("%d\n", a[i]);
  }
  return 0;
}
