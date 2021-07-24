#include <stdio.h>
 
int main() {
int n;
while(scanf("%d",&n)!=EOF){
if(n>=90 && n<180){printf("Boa Tarde!!\n");}
if(n>=180 && n<270){printf("Boa Noite!!\n");}
if(n>=270 && n<360){printf("De Madrugada!!\n");}
if(n>=0 && n<90 || n==360){printf("Bom Dia!!\n");}
}
 
    return 0;
}
