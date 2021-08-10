#include <stdio.h>
#include <stdlib.h>
int ordenacao(const void *a,const void *b){
    if(*(int*)a == *(int*)b)
		return 0;
	else{
		if(*(int*)a < *(int*)b)
			return 1;
		else
			return -1;
	}
}
 
int main() {
    int n,m,i,inalterados;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&m);
            inalterados = 0;
            int vet[m],aux[m];
            for(i=0;i<m;i++){
                scanf("%d",&vet[i]);
                aux[i] = vet[i];
            }
            qsort(aux,m,sizeof(int),ordenacao);
            for(i=0;i<m;i++){
                if(vet[i] == aux[i])
                    inalterados++;
            }
            printf("%d\n",inalterados);
        }
    return 0;
}
