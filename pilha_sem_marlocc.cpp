#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 100

typedef struct {
	int item[MAXTAM];
	int topo;
} PILHA;

void inicia_pilha(PILHA *p) {
	p->topo = -1;
}

int pilha_vazia (PILHA *p) {
	if (p->topo == -1) return 1;
	return 0;
}

int pilha_cheia (PILHA *p) {
	if (p->topo == MAXTAM-1) return 1;
	return 0;
}

void inserir_pilha (PILHA *p, int x) {
	if(pilha_cheia(p) == 1) {
		printf("\n ERRO: Pilha Cheia");
	} else {
		p->topo++;
		p->item[p->topo] = x;	
	}
}

int remove_pilha (PILHA *p) {
	int aux;
	if(pilha_vazia(p) == 1) return printf("\n ERRO: Pilha Vazia");
	aux = p->item[p->topo];
	p->topo--;
	return aux;
}

int main() {
	PILHA p;
	inicia_pilha(&p);

	inserir_pilha(&p, 10);
	inserir_pilha(&p, 20);
	inserir_pilha(&p, 30);

	int aux;

	aux = remove_pilha(&p);
	printf("\n SAIU: %d", aux);	

	aux = remove_pilha(&p);
	printf("\n SAIU: %d", aux);	

	aux = remove_pilha(&p);
	printf("\n SAIU: %d", aux);	

	aux = remove_pilha(&p);
    return 0;
}
