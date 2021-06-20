#include <stdio.h>
 
int main() {
long int universidades,qntalunos,sum=0,resto;
scanf("%li",&universidades);
while(universidades--){
    scanf("%li",&qntalunos);
    resto=qntalunos%3;
    qntalunos=qntalunos-resto;
    sum=sum+qntalunos;
}
printf("%li\n",sum);
    return 0;
}
