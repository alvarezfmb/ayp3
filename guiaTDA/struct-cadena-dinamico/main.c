#include "cadena.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	Cadena c;
	char* test = "string 1";
	cadena_init(&c, test, strlen(test));
	cadena_print(&c);
	cadena_liberar(&c);
	cadena_print(&c);
	cadena_liberar(&c);
	cadena_modificar(&c, test);
	char* test2 = "otro string";
	cadena_modificar(&c, test2);
	cadena_print(&c);
	char* test3 = "blaaaaaaaa";
	cadena_modificar(&c, test3);
	cadena_print(&c);
	cadena_concatenar(&c, " bla bla");
	cadena_print(&c);
}
