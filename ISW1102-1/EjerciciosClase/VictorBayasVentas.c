#include <stdio.h>
#include <stdlib.h>
void pausarConsola();
void IngresoDatos(float [1000][1000]);
void impresionDatosVendedor(float [1000][1000]);
int main(){
  int op;
  float ventas[1000][1000];
  while(op!=3){
    printf("1. INgresar\n2. Mostrar\n3. Salir\nIngresa: ");
    scanf("%d",&op);
    switch(op){
      case 1:
      IngresoDatos(ventas);
      pausarConsola();//pausa
      system("cls||clear");//limpiar pantalla
      break;
      case 2:
      impresionDatosVendedor(ventas);
      pausarConsola();//pausa
      system("cls||clear");//limpiar pantalla
      break;
      case 3:
      exit(0);
      default:
      printf("ERROR\nOpcion No Valida\n");//error
      pausarConsola();//pausa
      system("cls||clear");//limpiar pantalla
    }
  }
}

void pausarConsola(){
  while (getchar() != '\n');//limpia buffer de entrada
  printf("Presione ENTER para continuar....");//mensaje al usuario
  getchar();//pausa la consola hasta presionar enter
}

void IngresoDatos(float ventas[1000][1000]){
  int cant_v,cant_p,i,j;
  float suma;
  char nombre[30];
  printf("Ingrese la cantidad de vendedores: ");
  scanf("%d",&cant_v);
  while(cant_v<=0){
    printf("ERROR\nIngrese la cantidad de vendedores: ");
    scanf("%d",&cant_v);
  }
  for(i=0;i<cant_v;i++){
    suma=0;
    printf("Ingrese nombre vendedor #%d: ",i+1);
    while (getchar() != '\n');
    gets(nombre);
    printf("Ingrese la cantidad de ventas: ");
    scanf("%d",&cant_p);
    while(cant_p<=0){
      printf("ERROR\nIngrese la cantidad de ventas: ");
      scanf("%d",&cant_p);
    }
    for(j=0;j<cant_p;j++){
      printf("Ingrese el valor del producto #%d: ",j+1);
      scanf("%f",&ventas[i][j]);
      while(ventas[i][j]<=0){
        printf("ERROR\nIngrese el valor del producto #%d: ",j+1);
        scanf("%f",&ventas[i][j]);
      }
      //printf("debug %f\n",ventas[i][j]);
      suma=suma+ventas[i][j];
      //printf("debug suma %f\n",suma);
    }
    printf("%s tiene un promedio de ventas de: $%.2f\n",nombre,(float)suma/j);
  }
}

void impresionDatosVendedor(float ventas[1000][1000]){
  printf("Datos ingresados:\n");
  for(int i=0;i<1000;i++){
    for(int j=0;j<1000;j++){
      if(ventas[i][j]==0){
        break;
      }
      else{
        printf("vendedor[%d] producto[%d]: %.2f\n",i+1,j+1,ventas[i][j]);
      }
    }
  }
}
