#include <stdio.h>
 
int main() {
  int n,cont=0;
  float a,resto;
    scanf("%d",&n);
    while(n--){
        scanf("%f",&a);
        while(1){
            cont++;
            resto=a*1/2;
            a=resto;
            if(resto<=1.0){
                printf("%d dias\n",cont);
                break;
            }
        }
        cont=0;
    }
    return 0;
}
