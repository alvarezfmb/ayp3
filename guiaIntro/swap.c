void swap(int *px, int *py) {
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}

int main(int argc, char const *argv[])
{
  int a = 5;
  int b = 3;
  swap(&a, &b);
  printf("%d\n", a);
  printf("%d\n", b);
  return 0;
}