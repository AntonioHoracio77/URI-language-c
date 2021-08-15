#include <stdio.h>
#include <string.h>
struct times{
	char timao[150];
	int pontos;
};
int main() {
	int n,i,g1,g2,aux,maiorPontos;
	char timao[150],v1[150],v2[150],campeao[150],Sport[7] = "Sport";
		while(1){
			scanf("%d",&n);
			if(n == 0)
				break;
			struct times p[n];
			for(i=0;i<n;i++)
				scanf("%s %d",p[i].timao,&p[i].pontos);
			aux = n/2;
			maiorPontos = 0;
			while(aux--){
				scanf("%s %d-%d %s",v1,&g1,&g2,v2);
				for(i=0;i<n;i++){
					if(strstr(p[i].timao,v1))
						p[i].pontos +=(3*g1);
					if(strstr(p[i].timao,v2))
						p[i].pontos +=(3*g2);
					if(g1>g2 && strstr(p[i].timao,v1))
						p[i].pontos +=5;
					if(g1<g2 && strstr(p[i].timao,v2))
						p[i].pontos +=5;
					if(g1 == g2 && strstr(p[i].timao,v2))
						p[i].pontos +=1;
					if(g1 == g2 && strstr(p[i].timao,v1))
						p[i].pontos +=1;
					if(p[i].pontos>maiorPontos){
						maiorPontos = p[i].pontos;
						strcpy(campeao,p[i].timao);
					}
				}
			}
			if(strstr(campeao,Sport))
				printf("O Sport foi o campeao com %d pontos :D\n\n",maiorPontos);
			else
				printf("O Sport nao foi o campeao. O time campeao foi o %s com %d pontos :(\n\n",campeao,maiorPontos);
		}
    return 0;
}
