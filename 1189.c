#include <stdio.h>
 
int main() {
    char operacao;
    double valores[12][12],soma = 0;
    int i,j,aux = 4;
        scanf("%c",&operacao);
        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
                scanf("%lf",&valores[i][j]);
                if(i>0 && i<11){
                    if(i<=5){
                        if(j<i){
                            soma+=valores[i][j];
                        }
                    }
                    else if(i>=6){
                        if(j<=aux){
                            soma+=valores[i][j];
                        }
                    }
                }
            }
            if(i>=6)
                aux--;
        }
        if(operacao == 'S')
            printf("%.1lf\n",soma);
        else
            printf("%.1lf\n",soma/30);
 
    return 0;
}
