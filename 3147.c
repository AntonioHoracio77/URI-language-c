#include <stdio.h>
 
int main() {
int a,b,c,d,e,f;
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if((a+b+c+f)>(d+e) ||(a+b+c+f)==(d+e)){
    printf("Middle-earth is safe.\n");
}
else{
    printf("Sauron has returned.\n");
}
    return 0;
}
