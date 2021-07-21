#include <stdio.h>
#include <stdlib.h>
int crescente(const void *a,const void *b){
	if(*(int*)a == *(int*)b)
		return 0;//iguais
	else{
		if(*(int*)a < *(int*)b)
			return -1;
		else
			return 1;
	}
}


int main() {
   	int l,c,i,j,aux = 0,aux2 = 0,valores;
   	char ide;
   		scanf("%d %d",&l,&c);
   		int vida[l*c],disciplina[l*c];
   		for(i=0;i<l;i++){
   			for(j=0;j<c;j++){
   				scanf("%d%c",&valores,&ide);
   				if(ide == 'V'){
   					vida[aux] = valores;
   					aux++;
				   }
				else{
					disciplina[aux2] = valores;
					aux2++;
				}
			   }
		   }
		   qsort(vida,aux,sizeof(int),crescente);
		   qsort(disciplina,aux2,sizeof(int),crescente);
		   for(i=aux-1;i>=0;i--)
		   		printf("%dV\n",vida[i]);
		   	for(j=aux2-1;j>=0;j--)
		   		printf("%dD\n",disciplina[j]);
		  
    return 0;
}
