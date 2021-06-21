#include <stdio.h>
 
int main() {
long int a1,a2,a3,maq1,maq2,maq3;
scanf("%li %li %li",&a1,&a2,&a3);
maq1=a2*2+a3*4;
maq2=a1*2+a3*2;
maq3=a2*2+a1*4;
if(maq1<maq2 && maq1<maq3 || maq1==maq2 || maq1==maq3){
    printf("%li\n",maq1);
}
else if(maq2<maq1 && maq2<maq3 || maq2==maq1 || maq2==maq3){
    printf("%li\n",maq2);
}
else if(maq3<maq2 && maq3<maq1 || maq3==maq2 || maq3==maq1){
    printf("%li\n",maq3);
}
    return 0;
}
