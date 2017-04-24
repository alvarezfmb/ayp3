#include "nave.h"

#include <stdio.h>
#include <string.h>

void nave_init(Nave* this, const char* nombre) {
  this->vida = 100;
  strcpy(this->nombre, nombre);
}

void nave_daniar(Nave* this, int danio) {
	this->vida -= danio;
}

void nave_print(Nave* this) {
  printf("Nombre: %s\n", this->nombre);
  printf("Vida: %d\n", this->vida);
}
