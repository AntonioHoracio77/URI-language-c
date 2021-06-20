#include <stdio.h>
 
int main() {
  int n,aldo,beto,soma1,soma2,cont=0;
    while(1){
        cont++;
        scanf("%d",&n);
        soma1=0;
        soma2=0;
        if(n==0){break;}
        while(n--){
            scanf("%d %d",&aldo,&beto);
            soma1=soma1+aldo;
            soma2=soma2+beto;
        }
        printf("Teste %d\n",cont);
        if(soma1>soma2){printf("Aldo\n");}
        else{printf("Beto\n");}
        printf("\n");
    }
    return 0;
}
