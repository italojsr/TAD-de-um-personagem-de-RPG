#include <stdio.h>
#include <stdlib.h>
#include "Bict.h"

Personagem *criar_personagem(char *name,int nv,int x,int y, char *BC, int gold){

  Personagem *pers;

  pers = malloc(sizeof(Personagem));
  
  strcpy(pers->nome,name); 
  pers->nivel = nv;
  pers->posicao[0] = x;
  pers->posicao[1]= y;
  strcpy(pers->classe,BC);
  pers->dinheiro = gold;

  return pers;
}

  void criar_atributos_personagem(Personagem *pers,int forc,int des,int con,int inte, int sab, int car){
  
  pers->atributos.forca = forc;
  pers->atributos.destreza = des;
  pers->atributos.constituicao = con;
  pers->atributos.inteligencia = inte;
  pers->atributos.sabedoria = sab;
  pers->atributos.carisma = car;
}


void movimentar_personagem(Personagem *pers, int x, int y){
  
  pers->posicao[0] = x;
  pers->posicao[1] = y;  
}

void upar_de_nivel(Personagem *pers,int up){
  pers->nivel += up;
}


void definir_dinheiro(Personagem *pers,int quantia){
  pers->dinheiro = quantia;
}

void consultar_atributos(Personagem *pers){
  printf("Atributos:\n ##Força: %d\n ##Destreza: %d\n ##Constituicao: %d\n ##Inteligencia: %d\n ##Sabedoria: %d\n ##Carisma: %d\n",pers->atributos.forca,pers->atributos.destreza,pers->atributos.constituicao,pers->atributos.inteligencia,pers->atributos.sabedoria,pers->atributos.carisma);
}


void consultar_todos_atributos(Personagem *pers){
  printf("nome:%s\nnivel: %d\nposicao(x,y):(%d,%d)\nclasse:%s\ndinheiro: %d peças de cobre\nAtributos:\n ##Força: %d\n ##Destreza: %d\n ##Constituicao: %d\n ##Inteligencia: %d\n ##Sabedoria: %d\n ##Carisma: %d\n",pers->nome,pers->nivel,pers->posicao[0],pers->posicao[1],pers->classe,pers->dinheiro,pers->atributos.forca,pers->atributos.destreza,pers->atributos.constituicao,pers->atributos.inteligencia,pers->atributos.sabedoria,pers->atributos.carisma);
}

void destruir_personagem(Personagem *pers){
  free(pers);
}

