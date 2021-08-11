#include <stdio.h>
 
int main() {
    char alfabeto[30];
    int n;
        while(scanf("%s",alfabeto)!=EOF){
            scanf("%d",&n);
            int vet[n],i;
            for(i=0;i<n;i++){
                scanf("%d",&vet[i]);
            }
            for(i=0;i<n;i++)
                printf("%c",alfabeto[vet[i]-1]);
            printf("\n");
        }
 
    return 0;
}
