#include<stdio.h>
int cuadrado_numero(int num); //funcion que devuelve el cuadrado de un numero entero
void cuadrado_num(int num); //funcion tipo void que muetra por pantalla el cudrado de un numero entero
void recibir_variable(char variable); // funcion que al recibir una variable muestra por pantalla la dirección y el contenido de la variable
void invertir(int *a,int *b); //con esta funcion invertire los 2 valores de los parametros
void orden(int *a, int *b); //devolverá en a el valor más chico y en b el valor más grande
int main()
{
    int cuadrado, numero;
    printf("Ingrese un numero entero\n");
    scanf("%d", &numero);

    cuadrado = cuadrado_numero(numero);

    printf("Su numero %d elevado al cuadrado es %d \n", numero, cuadrado);
    cuadrado_num(numero);

    //creamos una nueva variable y usamos la funcion "recibir_variable"
    char letra;
    puts("---------------------");
    printf("Ingrese una letra\n");
    fflush(stdin);
    scanf(" %c", &letra);
    recibir_variable(letra);

    //creamos 2 nuevas variables enteras para invertir sus valores
    int a, b;

    puts("---------------------");
    printf("Ingrese su primer numero.\n");
    scanf("%d", &a);
    printf("Ingrese su segundo numero.\n");
    scanf("%d", &b);

    invertir(&a, &b); //paso por referencia
    printf("Su primer numero ahora es %d y su segundo numero es %d.\n", a, b);
    puts("---------------------");

    //llamamos a la funcion orden

    orden(&a,&b);//paso por referencia
    if (a == b)
    {
        printf("Ambos números ingresados son iguales.\n");
    }else
    {
        printf("El numero %d es menor que el numero %d.\n", a, b);
        
    }
    
    
    




    
    return 0;
}
int cuadrado_numero(int num)
{
    int elevarcuadrado;
    elevarcuadrado = num*num;
    return elevarcuadrado;
}
void cuadrado_num(int num)
{
    int elevarcuadrado;
    elevarcuadrado = num*num;
    printf("Su numero %d elevado al cuadrado es %d \n", num, elevarcuadrado);


}

void recibir_variable(char variable)
{
    printf("La direccion de memoria de la letra %c es %p\n", variable, &variable);
}
void invertir(int *a,int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void orden(int *a, int *b)
{
    int c = *a;

        if (*b<*a)
        {
            *a = *b;
            *b = c;
        }
}