#include <stdio.h>
 
int main() {
  int n,cont=0,cont2=0,x=16,posicao,posicao2;
    while(x--){
        cont++;
        cont2++;
        scanf("%d",&n);
        if(n==1){
            posicao=cont;
        }
        if(n==9){
            posicao2=cont2;
        }
    }
    if(posicao>=1 && posicao<=8 && posicao2>=9 && posicao2<=16 || posicao2>=1 && posicao2<=8 && posicao>=9 && posicao<=16){
        printf("final\n");
    }
    else if(posicao>=1 && posicao<=4 && posicao2>=5 && posicao2<=8 || posicao2>=1 && posicao2<=4 && posicao>=5 && posicao<=8){
        printf("semifinal\n");
    }
    else if(posicao>=9 && posicao<=12 && posicao2>=13 && posicao2<=16 || posicao2>=9 && posicao2<=12 && posicao>=13 && posicao<=16){
        printf("semifinal\n");
    }
    else if(posicao-posicao2==1 && posicao%2==0 || posicao2-posicao==1 && posicao2%2==0 ){
        printf("oitavas\n");
    }
    else{
        printf("quartas\n");
    }
 
    return 0;
}
