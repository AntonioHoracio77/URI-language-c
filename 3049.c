#include <stdio.h>
 
int main() {
    int b,t,area = 160*70,trapezio;
        scanf("%d %d",&b,&t);
        trapezio = ((b+t)*70)/2;
        if(trapezio>abs(area-trapezio))
            printf("1\n");
        else if(trapezio<abs(area-trapezio))
            printf("2\n");
        else
            printf("0\n");
    
    return 0;
}
