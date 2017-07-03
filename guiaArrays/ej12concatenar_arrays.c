#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenar(char* dst, char* arr1, char* arr2, unsigned volA, unsigned volB) {
  // while (volA) {
  //   *dst = *arr1;
  //   dst++;
  //   arr1++;
  //   volA--;
  // }
  // while (volB) {
  //   *dst = *arr2;
  //   dst++;
  //   arr2++;
  //   volB--;
  // }
  memcpy(dst, arr1, volA);
  memcpy(dst + volA, arr2, volB);
}

int main(int argc, char const *argv[])
{
  int a[] = {1, 2};
  int b[] = {3, 4};
  int* arr_destino;
  unsigned volumen = sizeof(a) + sizeof(b);
  arr_destino = malloc(volumen);
  memset(arr_destino, 0x0, volumen);
  concatenar(arr_destino, a, b, sizeof(a), sizeof(b));
  for (int i = 0; i < 4; ++i) {
    printf("%d\n", arr_destino[i]);
  }
  free(arr_destino);
  arr_destino = 0x0;
  return 0;
}