#include <stdio.h>
 
int main() {
    int vet[15],c,i,cont_par = 0,cont_impar = 0;
    int par[5],impar[5];
        for(c=0;c<15;c++){
            scanf("%d",&vet[c]);
            if(vet[c]%2 == 0){
                par[cont_par] = vet[c];
                cont_par++;
            }
            else if(vet[c]%2 == 1 || vet[c]%2 == -1){
                impar[cont_impar] = vet[c];
                cont_impar++;
            }
            if(cont_par == 5){
                for(i=0;i<5;i++){
                    printf("par[%d] = %d\n",i,par[i]);
                }
                cont_par = 0;
            }
            if(cont_impar == 5){
                for(i=0;i<5;i++){
                    printf("impar[%d] = %d\n",i,impar[i]);
                }
                cont_impar = 0;
            }
        }
        if(cont_impar < 5){
                for(i=0;i<cont_impar;i++)
                    printf("impar[%d] = %d\n",i,impar[i]);
            }
         if(cont_par < 5){
                for(i=0;i<cont_par;i++)
                    printf("par[%d] = %d\n",i,par[i]);
            }
        
    return 0;
}
