#include <stdio.h>

void reversa(char* elementos, int cantidad, int tamanoElemento) {
	if (cantidad <= 1) {
		return;
	}
	for (int i = 0; i < tamanoElemento; i++) {
		char temp = elementos[i];
		elementos[i] = elementos[cantidad - tamanoElemento + i];
		elementos[cantidad - tamanoElemento + i] = temp;
	}
	reversa(elementos + tamanoElemento, cantidad - 2 * tamanoElemento, tamanoElemento);
}

int main() {
	float enteros[] = {1.5, 2.8, 3.2, 4.05, 5.8, 6.23};
	reversa(enteros, sizeof(enteros), sizeof(float));

	for (int i = 0; i < 6; i++)
		printf("%f\n", enteros[i]);
}