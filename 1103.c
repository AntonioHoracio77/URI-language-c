#include <stdio.h>
 
int main() {
    int h1,m1,h2,m2,dia;
        while(1){
            scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
            if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
                break;
            }
            h1 = h1*60;
            h2 = h2*60;
            if(h1 == h2 && m1>m2){
                dia = 24*60-(m1-m2);
            }
            else if(h1>h2){
                h1 = h1+m1;
                h2 = h2+m2;
                dia = 24*60 - abs(h1-h2);
            }
            else{
                h1 = h1 + m1;
                h2 = h2 + m2;
                dia = abs(h2-h1);
            }
            printf("%d\n",dia);
        }
 
    return 0;
}
