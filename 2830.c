#include <stdio.h>
 
int main() {
  int n,x;
    scanf("%d %d",&n,&x);
    if(n>=1 && n<=8 && x>=9 && x<=16 || x>=1 && x<=8 && n>=9 && n<=16){
        printf("final\n");
    }
    else if(n>=1 && n<=4 && x>=5 && x<=8 || x>=1 && x<=4 && n>=5 && n<=8){
        printf("semifinal\n");
    }
    else if(n>=9 && n<=12 && x>=13 && x<=16 || x>=9 && x<=12 && n>=13 && n<=16){
        printf("semifinal\n");
    }
    else if(x-n==1 && x%2==0 || n-x==1 && n%2==0){
        printf("oitavas\n");
    }
    else{
        printf("quartas\n");
    }

    return 0;
}
