/******************************************************************************

Calcular area del circulo

*******************************************************************************/
#include <stdio.h> //declarar libreria I/O
#include <math.h>

void main() //declarar funcion principal
{ //inicio
    float radio,area=0,pi=3.1416; //defino variables
    printf("ingresa el radio: ");
    scanf("%f", &radio); //leo radio
    area=pi*pow(radio,2); //c�lculo
    printf("el �rea es: %.2f", area);
} //fin
