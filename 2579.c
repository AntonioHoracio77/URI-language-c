#include <stdio.h>
 
int main() {
long int a,b,c,d;
scanf("%li %li %li %li",&a,&b,&c,&d);
if(b%2==1 && c%2==0 && d%2==0){
    printf("Direita\n");
}
else if(b%2==1 && c%2==1 && d%2==1){
    printf("Direita\n");
}
else if(b%2==1 && c%2==0 && d%2==1){
    printf("Esquerda\n");
}
else if(b%2==1 && c%2==1 && d%2==0){
    printf("Esquerda\n");
}
else if(b%2==0 && c%2==0 && d%2==0){
    printf("Direita\n");
}
else if(b%2==0 && c%2==1 && d%2==1){
    printf("Esquerda\n");
}
else if(b%2==0 && c%2==0 && d%2==1){
    printf("Esquerda\n");
}
else if(b%2==0 && c%2==1 && d%2==0){
    printf("Direita\n");
}
    return 0;
}
