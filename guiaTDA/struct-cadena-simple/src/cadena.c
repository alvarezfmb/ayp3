#include "cadena.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cadena_init(Cadena* this, const char* dato, unsigned largo) {
//	this->datos = (char*) malloc(largo);
//	strcpy(this->datos, dato);
	this->datos = dato;
	this->cantidad = largo;
}

void cadena_liberar(Cadena* this) {
	memset(this, 0x0, sizeof(Cadena));
}

Cadena* cadena_modificar(Cadena* this, const char* dato) {
	this->datos = dato;
	this->cantidad = strlen(dato);
	return this;
}

Cadena* cadena_concatenar(Cadena* this, const char* dato) {
	char dst[strlen(this->datos) + strlen(dato) + 2];
	strcpy(dst, this->datos);
	strcat(dst, dato);
	this->datos = dst;
	this->cantidad = strlen(dst);
	return this;
}

void cadena_print(Cadena* this) {
	printf("Nombre: %s\n", this->datos);
	printf("Largo: %d\n", this->cantidad);
}
