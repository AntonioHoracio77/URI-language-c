#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct ope{
	long int num1,num2,result;
}Ope;
struct passar{
	char perdedores[60];
};
int ordenacao(const void *a,const void *b){
	int r = strcmp((*(struct passar*)a).perdedores,(*(struct passar*)b).perdedores);
	if (r == 0)
		return 0;
	else if (r<0)
		return -1;
	else
		return 1;
}

int main(){
	long int casos,ide,c,aut,aux;
	char nome[60],operador;
		while(scanf("%li",&casos)!=EOF){
			Ope p[casos];
			struct passar k[casos];
			aut = 0;
			aux = 0;
			for(c=0;c<casos;c++)
				scanf("%li %li=%li",&p[c].num1,&p[c].num2,&p[c].result);
			for(c=0;c<casos;c++){
				scanf("%s %li %c",nome,&ide,&operador);
				if(operador == '*' && p[ide-1].num1 * p[ide-1].num2!= p[ide-1].result){
					strcpy(k[aux].perdedores,nome);
					aut++;
					aux++;
				}
				else if(operador == '+' && p[ide-1].num1+p[ide-1].num2!= p[ide-1].result){
					strcpy(k[aux].perdedores,nome);
					aut++;
					aux++;
				}
				else if(operador == '-' && p[ide-1].num1-p[ide-1].num2!= p[ide-1].result){
					strcpy(k[aux].perdedores,nome);
					aut++;
					aux++;
				}
				else if(operador =='I'){
					if(p[ide-1].num1 * p[ide-1].num2== p[ide-1].result || p[ide-1].num1+p[ide-1].num2== p[ide-1].result || p[ide-1].num1-p[ide-1].num2== p[ide-1].result){
						strcpy(k[aux].perdedores,nome);
						aut++;
						aux++;
					}
				}
			}
			if(aut == 0)
				printf("You Shall All Pass!\n");
			else if(aut == casos)
				printf("None Shall Pass!\n");
			else if(aut == 1)
				printf("%s\n",k[0].perdedores);
			else{
				qsort(k,aut,sizeof(struct passar),ordenacao);
				printf("%s",k[0].perdedores);
				for(c=1;c<aut;c++)
					printf(" %s",k[c].perdedores);
				printf("\n");
			}
		}
	return 0;
}
