#include <stdio.h>

typedef struct
{
  char nome[20];
  int J, V, E, D, GP, GC, SG, PTS;
} TIME;

typedef struct
{
  char time1[20];
  char time2[20];
  int gols1, gols2;
  int pos1, post2;
} PARTIDA;

int
main () {
  TIME times[4];
  PARTIDA partidas[13];

  for (int i = 0; i < 4; i++)
    {
      printf ("Digite o nome do time: ");
      scanf ("%s", times[i].nome);
      times[i].J = 0;
      times[i].V = 0;
      times[i].E = 0;
      times[i].D = 0;
      times[i].GP = 0;
      times[i].GC = 0;
      times[i].SG = 0;
      times[i].PTS = 0;
    }

  int partida = 0;
  for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
	    if (i != j) {
	        partida++;
	        
	        // time i jogando contra time j
	        
	        printf ("%s vs %s:", times[i].nome, times[j].nome);
	        scanf("%d %d", &partidas[partida].gols1, &partidas[partida].gols2);
	        
	        times[i].J++;
	        times[j].J++;
	        
	        times[i].GP += partidas[partida].gols1;
	        times[i].GC += partidas[partida].gols2; 
	        times[i].SG = times[i].GP - times[i].GC;
	        
	        times[j].GP += partidas[partida].gols2;
	        times[j].GC += partidas[partida].gols1; 
	        times[j].SG = times[j].GP - times[j].GC;
	        
	        if(partidas[partida].gols1 > partidas[partida].gols2) {
	            printf("Time 1 ganhou\n");
	            times[i].V++;
	            times[j].D++;
	            times[i].PTS += 3;
	        } else if(partidas[partida].gols1 < partidas[partida].gols2) {
	            printf("Time 2 ganhou\n");
	            times[i].D++;
	            times[j].V++;
	            times[j].PTS += 3;
	        } else {
	            printf("empate\n");
	            times[i].E++;
	            times[j].E++;
	            times[i].PTS += 1;
	            times[j].PTS += 1;
	        }
	    }
	  }
    }
    int pontos = 0;
    int campeao = 0;
    for (int i = 0; i < 4; i++) {
        printf("%s\n", times[i].nome);
        printf("JOGOS: %d\n", times[i].J);
        printf("VITORIAS: %d\n", times[i].V);
        printf("DERROTAS: %d\n", times[i].D);
        printf("EMPATES: %d\n", times[i].E);
        printf("GOLS A FAVOR: %d\n", times[i].GP);
        printf("GOLS CONTRA: %d\n", times[i].GC);
        printf("SALDO DE GOLS: %d\n", times[i].SG);
        printf("PONTOS: %d\n", times[i].PTS);
        printf("\n");
        printf("\n");
        
        if(times[i].PTS > pontos) {
            pontos = times[i].PTS;
            campeao = i;
        }
        
    }
    
    printf("O campeao fo campeonato foi o %s", times[campeao].nome);
    return 0;
}
