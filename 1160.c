#include <stdio.h>
#include <math.h>
int main() {
long int n,n1,n2,c,sum=0,sum2=0;
double x1,x2,qnt,qnt2;
scanf("%li",&n);
while(n--){
    scanf("%li %li %lf %lf",&n1,&n2,&x1,&x2);
    x1=x1/100;
    x2=x2/100;
    for(c=1;c;c++){
        qnt=n1*x1;
        qnt2=n2*x2;
        sum2=qnt2+n2;
        sum=qnt+n1;
        n1=floor(sum);
        n2=floor(sum2);
        if(c>100){
        	printf("Mais de 1 seculo.\n");
        	break;
		}
        else if(sum>sum2){
            printf("%li anos.\n",c);
            break;
        }
    }
}
 
    return 0;
}
