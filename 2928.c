#include <stdio.h>
 
int main() {
    char partes[15];
    unsigned short n,pulos = 0,lago = 0,impossivel = 0;
        scanf("%hu",&n);
        while(n--){
            scanf(" %s",partes);
            if(partes[0]=='.')
                lago++;
            else{
                if(lago<=2 && lago!=0)
                    pulos++;
                else if(lago>2)
                    impossivel++;
                lago = 0;
            }
        }
        if(impossivel>=1)
            printf("N\n");
        else if(lago>=1)
            printf("%hu\n",lago);
        else
            printf("%hu\n",pulos);
 
    return 0;
}
