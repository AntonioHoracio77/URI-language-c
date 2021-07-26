#include <stdio.h>
 
int main() {
int i,x,g,inter=0,gremio=0,empate=0,cont=0;
while(x!=2){
    scanf("%d %d",&i,&g);
    cont++;
    if(i>g){inter=inter+1;}
    else if(g>i){gremio=gremio+1;}
    else if(g==i){empate=empate+1;}
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&x);
}
printf("%d grenais\n",cont);
printf("Inter:%d\n",inter);
printf("Gremio:%d\n",gremio);
printf("Empates:%d\n",empate);
if(inter>gremio){printf("Inter venceu mais\n");}
else if(gremio>inter){printf("Gremio venceu mais\n");}
else{printf("Nao houve vencedor\n");}

 
    return 0;
}
