/*
Examen Victor Bayas

Entrada
entero Votos

Proceso
mientras voto diferente 0
leo voto
Según voto
aumento la cantidad de votos a cada Candidato es decir
c1,c2,c3,c4 y c5
imprimo Votos del arreglo
imprimo la cantidad de votos de cada Candidato con porcentaje
imprimo total votos

Salida
votos ingresados
la cantidad de votos a cada Candidato con porcentaje
total de votos
*/
//librerias
#include <stdio.h>
#include <stdlib.h>
//prototipos
void pausarConsola();
void ingresoDatos(int[]);
void mostrarDatos(int[]);
//main
void main(){//main
  int op,votos[100];//declaro
  //el arreglo es para pasarlo como referencia a las funciones
  while(op!=3){//sale si es 3
    //mensajes y lecturas
    printf("Menu - Victor Bayas\nINFO: Ingrese primero los votos\n1. Ingresar Votos\n2. Imprimir Votos Ingresados\n3. Salir\nIngrese una opcion: ");//imprime
    scanf("%d",&op);//leo
    system("clear");//limpiar pantalla
    switch(op){
      case 1:
      ingresoDatos(votos);//llamo funcion
      pausarConsola();//pausa
      system("cls||clear");//limpiar pantalla
      break;//sale switch
      case 2:
      mostrarDatos(votos);//llamo funcion
      pausarConsola();//pausa
      system("cls||clear");//limpiar pantalla
      break;//sale switch
      case 3://caso3
      exit(0);//sale
      default://error
      printf("ERROR\nOpcion No Valida\n");//error
      pausarConsola();//pausa
      system("cls||clear");//limpiar pantalla
      break;//sale switch
    }//fin
  }//fin
}//fin del main

void pausarConsola(){
  while (getchar() != '\n');
  printf("Presione ENTER para continuar....");//Mensaje
  getchar();//pausar pantalla
}

void ingresoDatos(int votos[]){//funcion paso x referencia
  int voto_actual=-1;//inicializo
  for(int i=0;voto_actual!=0;i++){//for
    printf("Ingrese su voto del 1 al 5 (0=salir): ");//imprime
    scanf("%d",&voto_actual);//lee
    while(voto_actual<0 || voto_actual>5){//valida los votos
      printf("ERROR\nIngrese su voto del 1 al 5 (0=salir): ");//imprime
      scanf("%d",&voto_actual);//lee
    }//fin
    votos[i]=voto_actual;//regresa referencia
  }//fin
}//fin

void mostrarDatos(int votos[]){//funcion sin retorno
  int c1=0,c2=0,c3=0,c4=0,c5=0,suma;//declaro
  printf("Votos Ingresados por teclado\n");//muestra
  for(int i=0;i<100;i++){//comienzo a mostrar votos
    if(votos[i]>0 && votos[i]<=5){//solo validos
      printf("Voto: %d\n",votos[i]);//imprimo voto
      //validaciones para asignar los votos a cada Candidato
      if(votos[i]==1)//si es 1
      c1++;//Candidato 1 aumenta
      else if(votos[i]==2)//si es 2
      c2++;//Candidato 2 aumenta
      else if(votos[i]==3)//si es 3
      c3++;//Candidato 3 aumenta
      else if(votos[i]==4)//si es 4
      c4++;//Candidato 4 aumenta
      else if(votos[i]==5)//si es 5
      c5++;//Candidato 5 aumenta
    }//fin
    else if(votos[i]==0)//sale
    break;//sale
  }//fin
  suma=c1+c2+c3+c4+c5;//sumo todo
  //imprimo total y porcentaje de cada Candidato
  printf("Candidato 1: %d ===> %.2f%%\n",c1,(float)(c1*100)/suma);//Candidato 1
  printf("Candidato 2: %d ===> %.2f%%\n",c2,(float)(c2*100)/suma);//Candidato 2
  printf("Candidato 3: %d ===> %.2f%%\n",c3,(float)(c3*100)/suma);//Candidato 3
  printf("Candidato 4: %d ===> %.2f%%\n",c4,(float)(c4*100)/suma);//Candidato 4
  printf("Candidato 5: %d ===> %.2f%%\n",c5,(float)(c5*100)/suma);//Candidato 5
  printf("TOTAL Votos Validos: %d\n",suma);//total
}//fin
