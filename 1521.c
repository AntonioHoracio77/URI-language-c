#include <stdio.h>
 
int main() {
    unsigned short n,c,inicio,culpado;
        while(1){
            scanf("%hu",&n);
            if(n == 0)
                break;
            unsigned short alunos[n];
            for(c=0;c<n;c++){
                scanf("%hu",&alunos[c]);
            }
            scanf("%hu",&inicio);
            inicio --;
            while(1){
                if(alunos[inicio]==inicio+1){
                    culpado = inicio+1;
                    break;
                }
                inicio = alunos[inicio]-1;
            }
            printf("%hu\n",culpado);
        }
    return 0;
}
