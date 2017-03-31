// intercambiar dos valores del mismo tipo

void intercambiar(char a, char*b, unsigned cantidad) {
  for (int i = 0; i <= cantidad; ++i)
  {
    char* aux_a = &a + i;
    char* aux_b = &b + i;
    *aux_a = *aux_b;
    // aux_b = aux_a;

  }

}

int main(int argc, char const *argv[])
{
  int a = 3;
  int b = 5;
  // intercambiar(a, b, sizeof(a));
  printf("%d\n", a);
  printf("%d\n", b);
  for (int i = 0; i < sizeof(a); ++i)
  {
    printf("%02x\n", *(&a + i));
  }
  return 0;
}