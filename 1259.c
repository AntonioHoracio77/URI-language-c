#include <stdio.h>
#include <stdlib.h>
int crescente(const void *a,const void *b){
	if(*(long int*)a == *(long int*)b)
		return 0;//iguais
	else{
		if(*(long int*)a < *(long int*)b)
			return -1;//vem antes
		else
			return 1;//vem depois
	}
}

int main() {
    long int n,num,ide1 = 0,ide2 = 0,i;
    	scanf("%li",&n);
    	long int par[n],impar[n];
    	while(n--){
    		scanf("%li",&num);
    		if(num%2 == 0){
    			par[ide1] = num;
    			ide1++;
			}
			else if(num%2 == 1){
				impar[ide2] = num;
				ide2++;
			}
		}
		qsort(par,ide1,sizeof(long int),crescente);
		for(i = 0;i<ide1;i++)
			printf("%li\n",par[i]);
		qsort(impar,ide2,sizeof(long int),crescente);	
		for(i = ide2-1;i>=0;i--)
			printf("%li\n",impar[i]);
    return 0;
}
