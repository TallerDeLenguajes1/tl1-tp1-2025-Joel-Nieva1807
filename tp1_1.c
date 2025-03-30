#include<stdio.h>
int main()
{
    int *puntero, numero=18;
    puntero = &numero;
    printf("Hola mundo\n");
    printf("El contenido del puntero es: %d \n", *puntero);
    printf("La direccion de memoria almacenada por el puntero es : %p \n", puntero);
    printf("La direccion de memoria de la variable es %p \n", &numero);
    printf("La direccion de memoria del puntero es: %p \n", &puntero);
    printf("Tamanio de memoria utilizado por el puntero: %zu bytes\n", sizeof(puntero));
    printf("Tamanio de memoria utilizado por la variable numero: %zu bytes\n", sizeof(numero));

    return 0;
}
