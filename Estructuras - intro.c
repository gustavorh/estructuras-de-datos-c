#include <stdio.h>

typedef struct Carrera {
    int codigo;
    char nombre[30];
    int duracion;
    int arancel;
}Carrera;

void main() {
    Carrera carr1 = {26067, "Ingeniería en Informática", 10, 3307000};
    Carrera carr2 = {26301, "Ingeniería Civil Informática", 10, 3307000};

    // Mostrar carreras en la estructura.
    /*
    printf("Existen las siguientes carreras almacendas en la estructura:\n");
    printf("Carrera 1: %s\n", carr1.nombre);
    printf("Carrera 2: %s\n", carr2.nombre);
    */

    // Mostrar carreras en la estructura (más dinámico).
    printf("Existen las siguientes carreras almacenadas en la estructura:\n");
    for (int i = 0; i < 2; ++i) {
        printf("Carrera %i: %s\n", (i+1), carr1.nombre);
    }
}
