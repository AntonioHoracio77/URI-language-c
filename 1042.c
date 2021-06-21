#include <stdio.h>
 
int main() {
int a,b,c,maior1,maior2,maior3;
scanf("%d %d %d",&a,&b,&c);
if(a>b && b>c){
    maior1=a;
    maior2=b;
    maior3=c;
    
}
else if(b>a && a>c){
    maior1=b;
    maior2=a;
    maior3=c;
    
}
else if(c>b && b>a){
    maior1=c;
    maior2=b;
    maior3=a;
    
}
else if(b>c && c>a){
    maior1=b;
    maior2=c;
    maior3=a;
    
}
else if(a>c &&c >b){
    maior1=a;
    maior2=c;
    maior3=b;
    
}
else if(c>a && a>b){
    maior1=c;
    maior2=a;
    maior3=b;
    
}
printf("%d\n",maior3);
printf("%d\n",maior2);
printf("%d\n",maior1);
printf("\n");
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
    return 0;
}
