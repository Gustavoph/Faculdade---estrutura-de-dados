#include <stdio.h>

typedef struct {
    int hora, minutos, segundos;
} TipoHorario;

typedef struct {
    int dia, mes, ano;
} TipoData;

typedef struct {
    TipoData data;
    TipoHorario horario;
    char texto[50];
} TipoCompromisso;

int main()
{
    TipoHorario h1;
    TipoData d1;
    TipoCompromisso c1;
    printf("Digite as informações do compromisso: \n");
    printf("Digite as informações da data\n data-mes-ano: \n");
    scanf("%d%d%d", &c1.data.dia, &c1.data.mes, &c1.data.ano);
    
    printf("Digite as informações do horario\n hora-minutos-segundos: \n");
    scanf("%d%d%d", &c1.horario.hora, &c1.horario.minutos, &c1.horario.segundos);
    
    system("pause");
    return 0;
}
