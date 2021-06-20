#include <stdio.h>
 
int main() {
int a,b;
while(scanf("%d %d",&a,&b)!=EOF){
    if(b>a){
    printf("%d\n",b-a-1);}
    else if(a>b){
        printf("%d\n",a-b-1); 
    }
    else{
        printf("0\n");
    }
}
    return 0;
}
