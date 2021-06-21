#include <stdio.h>
 
int main() {
int a1,a2,a3,a4,a5,a6,saldoc,saldof;
scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6);
saldof=(a4*3)+a5;
saldoc=(a1*3)+a2;
if(saldoc==saldof){
    if(a3==a6){
        printf("=\n");
    }
    else if(a6>a3){
        printf("F\n");
    }
    else{
        printf("C\n");
    }

}


else if(saldoc>saldof){
printf("C\n");
}
else{
printf("F\n");
}

    return 0;
}
