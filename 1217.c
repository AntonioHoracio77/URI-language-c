#include <stdio.h>
#include <string.h>

int main(){
	int n,c,qnt_frutas = 0,i;
	float preco,preco_p_fruta = 0,qnt_total = 0;
	char fruta[10000];
		scanf("%d",&n);
		for(c=1;c<=n;c++){
			scanf("%f%*c",&preco);
			scanf("%[^\n]%*c",&fruta);
			for(i = 0 ; i<strlen(fruta);i++){
				if(fruta[i]== 32){
					qnt_frutas++;
					
				}
				
			}
			qnt_total = qnt_total+ qnt_frutas+1;
			preco_p_fruta+=preco;
			printf("day %d: %d kg\n",c,qnt_frutas+1);
			qnt_frutas = 0;
			}
			printf("%.2f kg by day\n",qnt_total/n);
			printf("R$ %.2f by day\n",preco_p_fruta/n);
	
	return 0;
}
