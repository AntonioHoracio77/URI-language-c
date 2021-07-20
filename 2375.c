#include <stdio.h>
 
int main() {
long int diametro,altura,largura,comprimento;
scanf("%li %li %li %li",&diametro,&altura,&largura,&comprimento);
if(altura>=diametro && largura>=diametro && comprimento>=diametro){
    printf("S\n");
}else{
    printf("N\n");
}
 
    return 0;
}
