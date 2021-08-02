#include <stdio.h>

int main() {
	unsigned short n,v,aux,pulos,buraco,i;
		while(1){
			scanf("%hu %hu",&n,&v);
			if(n == 0 && v == 0)
				break;
			buraco = 0;
			for(i = v;i>=1;i--){
				v = i;
				aux = 0;
				pulos = 0;
				while(1){
					aux++;
					pulos+=v;
					if(aux == v){
						aux = 0; 
						v--;
					}
					if(pulos == n){
						buraco++;
						break;
					}
					if(v == 0)
						break;	
				}
				if(buraco>=1){
					printf("possivel\n");
					break;}
			}
			if(buraco == 0)
				printf("impossivel\n");
	}
    return 0;
}
