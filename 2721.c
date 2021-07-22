#include <stdio.h>
 
int main() {
int n,c,sum=0;
for(c=1;c<=9;c++){
    scanf("%d",&n);
    sum=sum+n;
}
if(sum%9==1 || sum==1){printf("Dasher\n");}
else if(sum%9==0 || sum==9){printf("Rudolph\n");}
else if(sum%9==8 || sum==8){printf("Blitzen\n");}
else if(sum%9==7 || sum==7){printf("Donner\n");}
else if(sum%9==6 || sum==6){printf("Cupid\n");}
else if(sum%9==5 || sum==5){printf("Comet\n");}
else if(sum%9==4 || sum==4){printf("Vixen\n");}
else if(sum%9==3 || sum==3){printf("Prancer\n");}
else if(sum%9==2 || sum==2){printf("Dancer\n");}


 
    return 0;
}
