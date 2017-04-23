#include <stdio.h>

int suma(int a, int b) {
  return a + b;
}

int resta(int a, int b) {
  return a - b;
}

int multi(int a, int b) {
  return a * b;
}

int main() {
  int (*f)(int, int) = &multi;

  printf("producto: %d\n", (*f)(9, 9));
}