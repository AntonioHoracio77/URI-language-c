#include <stdio.h>
 
int main() {
    int n;
        scanf("%d",&n);
        int vet[n],i,semQueda = 0;
        for(i=0;i<n;i++)
            scanf("%d",&vet[i]);
        for(i=0;i<n;i++){
            if(vet[i]<vet[i-1] && i-1!=-1){
                printf("%d\n",i+1);
                semQueda++;
                break;
            }
        }
        if(semQueda == 0)
            printf("0\n");
    
    return 0;
}
