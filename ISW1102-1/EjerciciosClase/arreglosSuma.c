/*
ingresar reales a un arreglo, sumar y mostrar
*/
#include <stdio.h>
float sumaFuncion(int);
void pares(int);
void main(){
  int op,n;
  while(op!=3){
    printf("1. Suma\n2. Pares\n3. Salir\nIngresa una opcion: ");
    scanf("%d",&op);
    switch(op){
      case 1:
      printf("Ingrese la cantidad de numeros: ");
      scanf("%d",&n);
      while(n<=0){
        printf("ERROR\nIngrese la cantidad de Numeros: ");
        scanf("%d",&n);
      }
      printf("La suma es: %.2f\n",sumaFuncion(n));
      break;
      case 2:
      printf("Ingrese la cantidad de numeros pares: ");
      scanf("%d",&n);
      while(n<=0){
        printf("ERROR\nIngrese la cantidad de numeros pares: ");
        scanf("%d",&n);
      }
      pares(n);
      break;
      default:
      printf("ERROR\n");
      break;
    }
  }
}

float sumaFuncion(int cant){
  int i=0;
  float numeros[cant],suma=0;
  while(i<cant){
    printf("Ingrese el elemento [%d]: ",i);
    scanf("%f",&numeros[i]);
    suma=suma+numeros[i];
    i++;
  }
  i=0;
  printf("Elementos del arreglo\n");
  while(i<cant){
    printf("Elemento [%i]: %.2f\n",i,numeros[i]);
    i++;
  }
  return suma;
}

void pares(int cant){
  int i=0,par=0,numPar[cant];
  while(i<cant){
    par=par+2;
    numPar[i]=par;
    printf("Elemento [%d]: %d\n",i,numPar[i]);
    i++;
  }
}
