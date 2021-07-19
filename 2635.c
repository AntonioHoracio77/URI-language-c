#include <stdio.h>
#include <string.h>

typedef struct pesquisados{
  char palavras[200];
}Pesquisados;

int main() {
    int n,m,i,j,c,cont = 0,maiorp = 0,qnt = 0;
    char pesquisas[200];
      scanf("%d",&n);
      Pesquisados p[n];
      for(i=0;i<n;i++){
          scanf("%s",p[i].palavras);
      }
      scanf("%d",&m);
      for(i=0;i<m;i++){
          qnt = 0;
          maiorp = 0;
          scanf("%s",pesquisas);
          for(j=0;j<n;j++){
            cont = 0;
            for(c=0;c<strlen(pesquisas);c++){
              if(pesquisas[c]==p[j].palavras[c]){
                cont++;
              }
            }
            if(cont == strlen(pesquisas)){
              qnt++;
              if(strlen(p[j].palavras)>maiorp)
                  maiorp = strlen(p[j].palavras);
            }
          }
          if(qnt>0)
            printf("%d %d\n",qnt,maiorp);
          else
            printf("-1\n");
      }

  return 0;
}
