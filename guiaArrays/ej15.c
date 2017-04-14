#include <stdio.h>
#include <string.h>

// imprime punteros de apariciones de palabra buscada
// void buscar_en_string_imprimir(char* string, char* buscada) {
//   char* token = strtok(string, " ");
//   while (token) {
//     if (!strcmp(token, buscada)) {
//       printf("%p\n", token);
//     }
//     token = strtok(NULL, " "); // le indica saltar al siguiente. Tiene un puntero fijo al string (?)
//   }
// }

int contar_apariciones(char* str, char* wrd) {
  int count = 0;
  char* tkn = strtok(str, " ");
  while (tkn) {
    if (!strcmp(tkn, wrd)) {
      count++;
    }
    tkn = strtok(NULL, " ");
  }
  return count;
}

// Crear una función que dado un parrafó de texto devuelva las ocurrencias (punteros a char)
// de una palabra.
void strfind(char* arrstr, char* word, char** occurs) {
  int i = 0;
  char* token = strtok(arrstr, " ");
  while (token) {
    if (!strcmp(token, word)) {
      printf("%p\n", token);
      occurs[i] = token;
      i++;
    }
    token = strtok(NULL, " "); // le indica saltar al siguiente. Tiene un puntero fijo al string (?)
  }
}

int main(int argc, char const *argv[]) {
  char parrafo[] = "este es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra";
  char buscada[] = "palabra";
  char aux1[] = "este es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra";
  char aux2[] = "palabra";
  // buscar_en_string_imprimir(parrafo, buscada);
  int apariciones = contar_apariciones(parrafo, buscada);
  char** ocurrencias[apariciones]; // array de punteros
  for (int i = 0; i < 3; ++i)
  {
    ocurrencias[i] = 0x0;
  }
  strfind(aux1, aux2, ocurrencias);
  for (int i = 0; i < 3; ++i)
  {
    printf("%p\n", ocurrencias[i]);
  }
  return 0;
}