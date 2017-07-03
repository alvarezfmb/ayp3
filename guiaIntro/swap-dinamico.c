#include <string.h>
#include <stdlib.h>

void swap(char* a, char* b, unsigned dataTypeSize) {
  char* tmp = (char*) malloc(dataTypeSize);
  memset(tmp, 0x0, dataTypeSize);
  memcpy(tmp, a, dataTypeSize);
  memcpy(a, b, dataTypeSize);
  memcpy(b, tmp, dataTypeSize);
  free(tmp);
  tmp = 0x0;
}

int main(int argc, char const *argv[])
{
  int x = 3;
  int y  = 2;
  swap(&x, &y, sizeof(int));
  printf("%d\n", x);
  printf("%d\n", y);
  return 0;
}