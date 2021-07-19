#include <stdio.h>

int main() {
    int n,vet[5],c,i,posicao=0,cont;
    char alternativas[5] = {'A','B','C','D','E'};
        while(1){
            scanf("%d",&n);
            if(n == 0){
                break;
            }
            for(c=1;c<=n;c++){
                cont = 0 ;
                for(i=0;i<5;i++){
                    scanf("%d",&vet[i]);
                    if(vet[i]<=127){
                        cont++;
                        posicao = i;
                    }
                }
                if(cont==1){
                    printf("%c\n",alternativas[posicao]);
                }
                else{
                    printf("*\n");
                }
            }
        }
    return 0;
}
