/*
crear programa q calcule imc de una persona
imc=peso/altura^2
entrada: flotante peso y altura
<18.5 peso bajo
normal entre 18.5 y 24.9
sobrepeso 25 y 29.9
obesidad 30 y 39.9
>40 morbida
*/
#include <stdio.h>
#include <math.h>
void main()
{
  float peso,altura,imc=0;
  printf("ingrese su Peso (kg): ");
  scanf("%f", &peso);
  printf("ingrese su altura (metros): ");
  scanf("%f", &altura);
  imc=(peso)/(pow(altura,2));
  printf("su IMC es: %.2f\n", imc);
  if (imc<18.5)
    printf("tiene un peso bajo");
  else if (imc>=18.5 && imc<=24.9)
    printf("tiene un peso normal");
  else if (imc>=25 && imc<=29.9)
    printf("tiene sobrepeso");
  else if (imc>=30 && imc<=39.9)
    printf("tiene obesidad");
  else
    printf("tiene obesidad morbida");
}
