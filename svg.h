#ifndef Archive__
#define Archive__
#include "archive.h"
/*
  Cria o arquivo "fn" para escrita. Substitui o arquivo, caso exista.
  Retorna NULL, caso nao tenha sido possivel criar arquivo.
 */
void abreEscritaSvg(char *fullPath);
/*
   Insere uma circunferencia com centro em (xc,yc) de raio r. Atributos de formatacao
(cores, largura de bordas, etc) podem ser informados pela string deco (atribuir NULL,
caso nao queira atribuir decoracao). As formatacoes mais usuais podem preparadas por
meio da operacao preparaDecoracao.
 */
void escreveCirculoSvg(Archive fsvg, double xc, double yc, double r, char *deco);

/*
   Insere um retangulo com canto inferior esquerdo  em (x,y), de largura larg e altura alt.
Atributos de formatacao (cores, largura de bordas, etc) podem ser informados pela string
deco (atribuir NULL, caso nao queira atribuir decoracao). As formatacoes mais usuais
podem preparadas por meio da operacao preparaDecoracao.
 */
void escreveRetanguloSvg(Archive fsvg, double x, double y, double larg, double alt, char *deco);

/*
   Insere uma linha com extremidades em (x1,y1) e (x2,y2).
Atributos de formatacao (cores, largura de bordas, etc) podem ser informados pela string
deco (atribuir NULL, caso nao queira atribuir decoracao). As formatacoes mais usuais
podem preparadas por meio da operacao preparaDecoracao.
 */
void escreveLinhaSvg(Archive fsvg, double x1, double y1, double x2, double y2, char *deco);

/* Font style: */
const char *FS_NORMAL = "normal";
const char *FS_ITALIC = "italic";
const char *FS_OBLIQUE = "oblique";

/* Font weight */

const char *FW_NORMAL = "normal";
const char *FW_BOLD = "bold";
const char *FW_BOLDER = "bolder";
const char *FW_LIGHTER = "lighter";

const char *TA_START = "start";
const char *TA_MIDDLE = "middle";
const char *TA_END = "end";


/*
  Insere no arquivo svg o texto txt na coordenada (x,y).
Atributos de formatacao (cores, fonte, etc) podem ser informados pela string
deco (atribuir NULL, caso nao queira atribuir decoracao). As formatacoes mais usuais
podem preparadas por meio da operacao preparaDecoracaoTexto.
 */
void escreveTextoSvg(Archive fsvg, double x, double y, char *txt, char *fontType, char *fontSize);

/* Fecha o arquivo fsvg. */
void fechaSvg(Archive fsvg);

#endif