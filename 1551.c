#include <stdio.h>
#include <string.h>
int main() {
    unsigned short n,i,j,qntLetras,aux;
    char frase[10000],alfabeto;
    	scanf("%hu",&n);
    	while(n--){
    		scanf(" %[^\n]",frase);
    		qntLetras = 0;
    		alfabeto = 'a';
    		for(i=0;i<26;i++){
    			aux = 0;
    			for(j=0;j<strlen(frase);j++){
    				if(alfabeto == frase[j]){
    					aux++;
    					break;
					}
				}
				alfabeto++;
				if(aux>=1)
					qntLetras++;
			}
			if(qntLetras == 26)
				printf("frase completa\n");
			else if (qntLetras>=13)
				printf("frase quase completa\n");
			else
				printf("frase mal elaborada\n");
    		
		}
    return 0;
}
