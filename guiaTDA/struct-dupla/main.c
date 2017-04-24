#include "dupla.h"

#include <stdio.h>

void print_int(void* p) {
	int* i = p;
	printf("Dato: %d\n", *i);
}

void print_double(void* p) {
	double* d = p;
	printf("Dato: %f\n", *d);
}

int main(int argc, char **argv) {
	Dupla d;
	int x = 23;
	dupla_init(&d, "tupla", &x, sizeof(x));
	dupla_print(&d, print_int);
	double dbl = 0.5;
	dupla_liberar(&d);
	dupla_modificar(&d, "nueva tupla");
	dupla_valor(&d, &dbl, sizeof(dbl));
	dupla_print(&d, print_double);
}
