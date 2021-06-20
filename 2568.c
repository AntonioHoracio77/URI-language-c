#include <stdio.h>

int main(){
    int a,b,c,d,e;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        for(e=a+1;e<=d+a;e++){
            if (e%2==0){
                b = b+c;
            }
            else{
                b = b-c;
            }
        }
        printf("%d\n",b);
    return 0;
}
