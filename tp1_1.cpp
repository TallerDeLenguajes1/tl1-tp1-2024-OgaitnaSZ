#include <stdio.h>

int main(){
    int num = 10;
    int *puntero = &num;

    printf("El contenido del puntero es: %d", *puntero);
    printf("\nLa direccion de memoria almacenada en el puntero es: %d", &puntero);
    printf("\nLa direccion de memoria de la variable es: %d", &num);
    printf("\nLa direccion de memoria del puntero es: %d", &puntero);
    printf("\nEl tamaño de memoria de la variable utilizado es: %d", sizeof(num));
    return 0;
}