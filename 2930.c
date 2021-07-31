#include <stdio.h>
 
int main() {
 int a,b;
 scanf("%d %d",&a,&b);
 if(b-a<0){
     printf("Eu odeio a professora!\n");
 }
 else if((b-a)>=3){
     printf("Muito bem! Apresenta antes do Natal!\n");
 }
 else if((b-a)<=2 && b+2<25){
     printf("Parece o trabalho do meu filho!\n");
     printf("TCC Apresentado!\n");
 }
 else if((b-a)<=2 && b+2>=25){
     printf("Parece o trabalho do meu filho!\n");
     printf("Fail! Entao eh nataaaaal!\n");
 }
 
    return 0;
}
