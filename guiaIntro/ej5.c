int main(int argc, char** argv) {
  char vector[] = { 0x9, 32, 25, 010 /* octal */, 200, 07 };

  char* p = 0;
  char* q = 0x0;

  if ( p == q ) {
    printf("q y p son iguales\n");
  }

  p = vector + 0x6;
  q = vector;

  p = vector + 5;

  if ( p == q ) {
    printf("q y p son iguales\n");
  }

  char* r = vector + 10;
  printf("%\n", *r);

  return 0;
}

void funcion() {
  
}