#include <stdio.h>
#include <stdlib.h>

int crescente(const void *a,const void *b){
	if(*(int*)a == *(int*)b)
		return 0;
	else{
		if(*(int*)a < *(int*)b)
			return -1;
		else
			return 1;
	}
}

int main() {
    int n,tam,c,i;
        scanf("%d",&n);
        for(c=1;c<=n;c++){
            scanf("%d",&tam);
            int valores[tam];
            for(i=0;i<tam;i++)
                scanf("%d",&valores[i]);
            qsort(valores,tam,sizeof(int),crescente);
            printf("Case %d: %d\n",c,valores[tam/2]);
                
        }
    return 0;
}
