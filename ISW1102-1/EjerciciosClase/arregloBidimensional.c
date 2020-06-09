#include <stdio.h>
#define tam 50
void imprimeMatriz(float [][tam]);
int main(){
  int op;
  float numeros[][tam]={{1.5,2.5},{-1.2,7.0},{5.3,6.7}};
  while(op!=6){
    printf("1. Inicializacion\n2. Mostrar\n3. Salir\n");
    scanf("%d",&op);
    switch(op){
      case 1:
      imprimeMatriz(numeros);
      while (getchar() != '\n');//limpia buffer de entrada
      printf("Presione ENTER para continuar....");//mensaje al usuario
      getchar();//pausa la consola hasta presionar enter
      break;
    }
  }
}
void imprimeMatriz(float n[][tam]){
  int i=0,j=0;
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      printf("%.1f\t",n[i][j]);
    }
    printf("\n");
  }
}
