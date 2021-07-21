#include <stdio.h>


 int tam(int numero){
 	int i,j,cont = 0;
 	for(i=0;i<=numero;i++){
 		for(j=0;j<=i;j++){
 			cont++;
		 }
	 }
	 return cont;
 	
 }
 
int main() {
    int num,i,j,cont = 0,aux;
    	while(scanf("%d",&num)!=EOF){
    		aux = num-1;
    		cont++;
    		if(num == 0){
	    		printf("Caso %d: 1 numero\n",cont);
	    		printf("0\n");
	   		}
	   		else{
	   			printf("Caso %d: %d numeros\n",cont,tam(num));
	   			printf("0");
    			for(i=1;i<=num;i++){
    				for(j=1;j<=i;j++){
    					printf(" %d",i);
					}
				}
				printf("\n");
			}
			printf("\n");
		}
        
    return 0;
}
