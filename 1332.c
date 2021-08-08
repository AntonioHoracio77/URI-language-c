#include <stdio.h>
#include <string.h> 
int main() {
    int n,soma;
    char numero[10];
        scanf("%d",&n);
        while(n--){
            scanf(" %s",numero);
            if(strlen(numero)==5)
                printf("3\n");
            else{
                soma = 0;
                if (numero[0]=='o')
                    soma += 1;
                if (numero[1]=='n')
                    soma += 1;
                if (numero[2]=='e')
                    soma += 1;
            }
            if(soma>=2 && strlen(numero)<5)
                printf("1\n");
            else if(soma<2 && strlen(numero)<5)
                printf("2\n");
        }
 
    return 0;
}
