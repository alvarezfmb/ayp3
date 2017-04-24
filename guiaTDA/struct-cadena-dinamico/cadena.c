#include "cadena.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cadena_init(Cadena* this, const char* dato, unsigned largo) {
	this->datos = (char*) malloc(largo + 1);
	strcpy(this->datos, dato);
	this->cantidad = largo;
}

void cadena_liberar(Cadena* this) {
	free(this->datos);
	memset(this, 0x0, sizeof(Cadena));
}

Cadena* cadena_modificar(Cadena* this, const char* dato) {
	free(this->datos);
	this-> datos = (char*) malloc(strlen(dato) + 1);
	strcpy(this->datos, dato);
	this->cantidad = strlen(dato);
	return this;
}

Cadena* cadena_concatenar(Cadena* this, const char* dato) {
	this->datos = (char*) realloc(this->datos, strlen(dato) + 1);
	strcat(this->datos, dato);
	this->cantidad += strlen(dato);
	return this;
}

void cadena_print(Cadena* this) {
	printf("Nombre: %s\n", this->datos);
	printf("Largo: %d\n", this->cantidad);
}
