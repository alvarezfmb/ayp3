#include "Nave.h"

int main(int argc, char const *argv[]) {
  Nave n;
  nave_init(&n, "Pepe");
  nave_print(&n);
  nave_daniar(&n, 25);
  nave_print(&n);
  return 0;
}
