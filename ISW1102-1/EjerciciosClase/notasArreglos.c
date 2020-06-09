#include <stdio.h>
#include <stdlib.h>
#define tam 50
void pausarConsola();
void imprimeMatriz(float [][tam]);
void ingresoDatos(int,int,float [][tam]);
void imprimeDatos(int,int,float [][tam]);
int main(){
  int op,edu,not;
  float numeros[][tam]={{1.5,2.5},{-1.2,7.0},{5.3,6.7}};
  float notas[tam][tam];
  while(op!=4){
    printf("1. Inicializacion\n2. Ingreso Datos\n3. Mostrar Datos\n4. Salir\n");
    scanf("%d",&op);
    system("cls||clear");
    switch(op){
      case 1:
      imprimeMatriz(numeros);
      pausarConsola();
      system("cls||clear");
      break;
      case 2:
      printf("Ingrese la cant de estudiantes: ");
      scanf("%d",&edu);
      while(edu<=0){
        printf("ERROR\nIngrese la cant de estudiantes: ");
        scanf("%d",&edu);
      }
      printf("Ingrese la cant de notas: ");
      scanf("%d",&not);
      while(not<0){
        printf("ERROR\nIngrese la cant de notas: ");
        scanf("%d",&not);
      }
      ingresoDatos(edu,not,notas);
      pausarConsola();
      system("cls||clear");
      break;
      case 3:
      imprimeDatos(edu,not,notas);
      pausarConsola();
      system("cls||clear");
      break;
      case 4:
      exit(0);
      default:
      printf("ERROR\n");
      pausarConsola();
      system("cls||clear");
      break;
    }
  }
}
void imprimeMatriz(float n[][tam]){
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      printf("%.1f\t",n[i][j]);
    }
    printf("\n");
  }
}
void ingresoDatos(int a, int b, float n[][tam]){
  int i,j;
  printf("Notas Ingresadas\n");
  for(i=0;i<a;i++){
    printf("Estudiante #%d\n",i);
    for(j=0;j<b;j++){
      printf("Nota #%d: ",j);
      scanf("%f",&n[i][j]);
      while(n[i][j]<0){
        printf("ERROR\nNota #%d: ",j);
        scanf("%f",&n[i][j]);
      }
    }
  }
}
void pausarConsola(){
  while (getchar() != '\n');//limpia buffer de entrada
  printf("Presione ENTER para continuar....");//mensaje al usuario
  getchar();//pausa la consola hasta presionar enter
}
void imprimeDatos(int a, int b, float n[][tam]){
  int i,j;
  float promedio,suma;
  for(i=0;i<a;i++){
    suma=0;
    printf("Estudiante #%d\n",i);
    for(j=0;j<b;j++){
      printf("Nota #%d: %.2f\n",j,n[i][j]);
      suma=suma+n[i][j];
    }
    promedio=suma/b;
    printf("El promedio del estudiante #%d es: %.2f\n",i,promedio);
  }
}
