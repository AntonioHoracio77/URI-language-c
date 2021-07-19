#include <stdio.h>
 
int main() {
    int numero,c,result,n,cont = 0;
    char operador;
        while(1){
            cont++;
            scanf("%d",&n);
            if(n == 0){
                break;
            }
            result = 0;
            for(c=1;c<=n;c++){
                if(c!=1){
                    scanf("%c",&operador);
                }
                scanf("%d",&numero);
                if(c == 1){
                    result = result+numero;
                }
                else if(operador == '+'){
                    result = result+numero;
                }
                else if(operador == '-'){
                    result = result-numero;
                }
            }
            printf("Teste %d\n",cont);
            printf("%d\n",result);
            printf("\n");
        }
    return 0;
}
