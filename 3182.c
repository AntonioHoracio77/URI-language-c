#include <stdio.h>

int main() {
  	unsigned long part,orcam,hoteis,semanas,preco,custo =1000000 ,menorc=1000000;
		scanf("%lu %lu %lu %lu",&part,&orcam,&hoteis,&semanas);
		unsigned long camas[semanas],i,j;
		while(hoteis--){
			scanf("%lu",&preco);
			for(i=0;i<semanas;i++){
				scanf("%lu",&camas[i]);
			}
			for(i=0;i<semanas;i++){
				if(camas[i]>=part){
					custo = preco*part;
					break;
				}
			}
			if(custo<menorc)
				menorc = custo;	
		}
		if(menorc<=orcam)
			printf("%lu\n",menorc);
		else
			printf("stay home\n");
    return 0;
}
