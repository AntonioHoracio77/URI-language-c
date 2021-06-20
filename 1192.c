#include <stdio.h>
 
int main() {
    int n,numero1,numero2;
    char operador;
        scanf("%d",&n);
        while(n--){
            scanf("%d %c %d",&numero1,&operador,&numero2);
            if(numero1 == numero2){
                printf("%d\n",numero1*numero2);
            }
            else if(operador>=65 && operador<=90){
                printf("%d\n",numero2-numero1);
            }
            else{
                printf("%d\n",numero1+numero2);
            }
        }
 
    return 0;
}
