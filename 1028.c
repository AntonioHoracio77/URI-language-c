#include <stdio.h>
 
int main() {
  int n,x,y,divi,menorv,maiorv,divi2;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&y);
        if(x>y){
            maiorv=x;
            menorv=y;
        }
        else if(x<=y){
            maiorv=y;
            menorv=x;
        }
        divi=maiorv%menorv;
        if(divi==0){
            printf("%d\n",menorv);
        }
        else{
            while(1){
            divi2=menorv%divi;
            menorv=divi;
            divi=divi2;
            if(divi2==0){
                printf("%d\n",menorv);
                break;
            }

            }
        }


    }
    return 0;
}
