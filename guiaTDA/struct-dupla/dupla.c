#include "dupla.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void dupla_init(Dupla* this, const char* nombre, void* dato,
		unsigned longitud_dato) {
	this->clave = (char*) malloc(strlen(nombre) + 1);
	strcpy(this->clave, nombre);
	this->dato = malloc(longitud_dato);
	memcpy(this->dato, dato, longitud_dato); // necesito usar memcpy para copiar void
}

void dupla_liberar(Dupla* this) {
	free(this->clave);
	free(this->dato);
	memset(this, 0x0, sizeof(Dupla));
}

// modifica la clave
Dupla* dupla_modificar(Dupla* this, const char* dato) {
	free(this->clave);
	this->clave = (char*) malloc(strlen(dato) + 1);
	strcpy(this->clave, dato);
	return this;
}

// almacena un dato en la tupla
Dupla* dupla_valor(Dupla* this, void* valor, unsigned longitud_valor) {
	free(this->dato);
	this->dato = malloc(longitud_valor);
	memcpy(this->dato, valor, longitud_valor);
	return this;
}

// recibe funcion para imprimir tipo de dato almacenado
void dupla_print(Dupla* this, void (*print)(void*)) {
	printf("Nombre: %s\n", this->clave);
	void* valor = this->dato;
	(*print)(valor);
}
