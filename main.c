
#include <stdio.h>
#include <stdlib.h>
#include "Bict.h"

int main(){

  Personagem *personagem1;
  int nivel, posicao[2],dinheiro,x,k,PC,up;
  char nome[10],classe[10];
  int forca,destreza,constituicao,sabedoria,carisma,inteligencia;



  //Menu

  k = 0;

  while(k==0){
  printf("*********Menu***********\n");
  printf("Criar personagem(1)\nCriar atributos do personagem(2)\nConsultar todos atributos(3)\nConsultar atributos(4)\nUpar de nivel(5)\nDefinir dinheiro(6)\nExcluir Personagem(7)\nSair(8)\n");
  scanf("%d",&x);
  if(x==1){
    printf("Criação de Personagem:\n");
    printf("#Nome:\n");
    scanf("%s",nome);
    printf("#Nível:\n");
    scanf("%d",&nivel);
    printf("#Posição inicial do personagem em (x,y): \n");
    scanf("%d%d",&posicao[0],&posicao[1]);
    printf("#Classe inicial(Bárbaro ou Cavaleiro):\n");
    scanf("%s",classe);
    printf("#Dinheiro:\n");
    scanf("%d",&dinheiro);
  
    personagem1 = criar_personagem(nome,nivel,posicao[0],posicao[1],classe,dinheiro);
  }

  else if (x==2){
    printf("Atributos:\n");
    printf("##Força:\n");
    scanf("%d",&forca);
    printf("##Destreza:\n");
    scanf("%d",&destreza);
    printf("##Constituicao:\n");
    scanf("%d",&constituicao);
    printf("##Sabedoria\n");
    scanf("%d",&sabedoria);
    printf("##Carisma\n");
    scanf("%d",&carisma);
    printf("##Inteligência\n");
    scanf("%d",&inteligencia);
        criar_atributos_personagem(personagem1,forca,destreza,constituicao,sabedoria,carisma,inteligencia);
  }
    
  else if (x==3){
    consultar_todos_atributos(personagem1);
  }
  else if (x==4){
    consultar_atributos(personagem1);
  }

  else if (x==5){
    printf("Quantos niveis %s vai subir?\n",nome);
    scanf("%d",&up);
    upar_de_nivel(personagem1,up);
  }  
  else if (x==6){
    printf("Qual a nova quantia?\n");
    scanf("%d",&PC);
    definir_dinheiro(personagem1,PC);
    printf("Agora %s tem %d Peças de Cobre\n",nome,PC);
  }

  else if(x==7){
    destruir_personagem(personagem1);
    printf("Seu personagem foi excluido\n");
  }

  else if (x==8){
    k = 1;
  }
  
  }

  return 0;
}

