#include "cadena.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	Cadena c;
	char* test = "string de longitud lo que se me cante, soy puntero anonimo";
	cadena_init(&c, test, strlen(test));
	cadena_print(&c);
	cadena_liberar(&c);
	cadena_print(&c);
	char* test2 = "otro string";
	cadena_modificar(&c, test2);
	cadena_print(&c);
	char* test3 = "blaaaaaaaaa";
	cadena_modificar(&c, test3);
	cadena_print(&c);
	cadena_concatenar(&c, " bla bla");
	cadena_print(&c);
}
