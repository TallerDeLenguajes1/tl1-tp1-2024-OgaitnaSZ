#include <stdio.h>

int num1 = 4;
int num2 = 6;
int devolverCuadrado(int num);
void devolverCuadrado2(int *num);
void invertir(int *num1, int *num2);
void orden(int *num1, int *num2);

int main(){
    /*a
    printf("Escriba un numero: ");
    scanf("%d", &num1);
    printf("\nEl cuadrado es %d", devolverCuadrado(num1));
    */
   
    /*b
    printf("Escriba un numero: ");
    scanf("%d", &num1);
    devolverCuadrado2(&num1);
    printf("\nEl cuadrado es %d", num1);
    */

    /*c
    printf("La direccion de memoria de la variable es: %d", &num1);
    printf("\nEl contenido de la variable es: %d", num1);
    */

    printf("Escriba un numero: ");
    scanf("%d", &num1);
    printf("\nEscriba otro numero: ");
    scanf("%d", &num2);

    printf("\nLos numeros son a=%d y b=%d", num1, num2);
    invertir(&num1, &num2);
    printf("\nLos numeros invertidos son a=%d y b=%d", num1, num2);

    orden(&num1,&num2);
    printf("\nLos numeros ordenados de menor a mayor son a=%d y b=%d", num1, num2);

    return 0;
}

int devolverCuadrado(int num){
    return num*num;
}
void devolverCuadrado2(int *num){
    *num = *num**num;
}
void invertir(int *num1, int *num2){
    int c = *num1;
    *num1 = *num2;
    *num2 = c;
}
void orden(int *num1, int *num2){
    if(*num1>*num2){
        int c = *num1;
        *num1 = *num2;
        *num2 = c;
    }
}