#include <stdio.h>
#include <stdlib.h>
typedef struct Lista{
    int x;
    struct Lista *prox;
}lista;
typedef struct Pilha{
    lista *topo;
}pilha;
void stack(pilha *aux){
    aux->topo = NULL;
}
void push(pilha *aux,int x){
    lista *p = (lista*) malloc(sizeof(lista));
        p->prox = aux->topo;
        aux->topo = p;
        p->x = x;
}
void topo(pilha *aux);
void trocas(pilha *aux);
void apagaPilha(pilha *aux);

int main() {
    pilha aux;
    int n,cartas;
    while(1){
	    scanf("%d",&n);
	    if(n == 0)
	    	break;
	    stack(&aux);
	    for(cartas=n;cartas>=1;cartas--)
	    	push(&aux,cartas);
	    printf("Discarded cards:");
	    trocas(&aux);
	    printf("\nRemaining card: %d\n",aux.topo->x);
	    apagaPilha(&aux);
	}		
    return 0;
}
void deslocaTopo(pilha *aux){
	lista *base = aux->topo;
	lista *Paux2 = aux->topo;
		if(base->prox){
			while(base->prox!=NULL)
					base = base->prox;
				//aux->topo apontara para o prox dado, deixando de apontar para o elemento que será movido para base
				aux->topo = aux->topo->prox;
				//Paux2->prox apontara para NULL ou seja,para o ponteiro auxiliar que aponta para o elemento do topo
				Paux2->prox = base->prox;
				//base->prox apontara para Paux2  o qual se tornou o ultimo elemento da pilha
				base->prox = Paux2;
		}
		
}
void trocas(pilha *aux){
	lista *Paux;
	int cont = 0;
		
		while(aux->topo->prox!=NULL){
			cont++;
			Paux = aux->topo;
			if(cont != 1)
				printf(",");
			printf(" %d",Paux->x);
			aux->topo = aux->topo->prox;
			free(Paux);
			deslocaTopo(aux);
		}
}
void apagaPilha(pilha *aux){
	lista *Paux = aux->topo;
		aux->topo = NULL;
		free(Paux);
	
}
