typedef struct _atributos{
  int  forca,destreza,constituicao,inteligencia,sabedoria,carisma;
  
} Atributos;

typedef struct _personagem{
  Atributos atributos;
  char nome[15],classe[10];
  int nivel,posicao[2],dinheiro; 
} Personagem;

//Operações

Personagem *criar_personagem(char *name,int nv,int x,int y, char *BC, int gold);

void criar_atributos_personagem(Personagem *pers,int forc,int des,int con,int inte, int sab, int car);


void movimentar_personagem(Personagem *pers, int x, int y);

void upar_de_nivel(Personagem *pers, int up);

void definir_dinheiro(Personagem *pers, int quantia);

void consultar_atributos(Personagem *pers);

void consultar_todos_atributos(Personagem *pers);

void destruir_personagem(Personagem *pers);
