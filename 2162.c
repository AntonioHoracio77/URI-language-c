#include <stdio.h>
int main() {
	int n,foraPadrao = 0;
   		scanf("%d",&n);
		int vet[n],i;
		for(i=0;i<n;i++)
			scanf("%d",&vet[i]);
		for(i=0;i<n;i++){
			if(i+1<n){
				if(vet[i] == vet[i+1])
					foraPadrao++;
			}
			if(i+2<n){
				if(vet[i]>vet[i+1] && vet[i+1]>vet[i+2])
					foraPadrao++;
				else if(vet[i]<vet[i+1] && vet[i+1]<vet[i+2])
					foraPadrao++;
			}
		}
		if(foraPadrao>=1)
			printf("0\n");
		else
			printf("1\n");
        
    return 0;
}
