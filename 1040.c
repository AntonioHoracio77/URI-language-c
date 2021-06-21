#include <stdio.h>
 
int main() {
double n1,n2,n3,n4,n5,media,media2;
scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
media=(n1*2+n2*3+n3*4+n4)/10;
if(media>=7){
    printf("Media: %.1lf\n",media);
    printf("Aluno aprovado.\n");
}
else if(media<5){
     printf("Media: %.1lf\n",media);
    printf("Aluno reprovado.\n");
}
else{
    printf("Media: %.1lf\n",media);
    printf("Aluno em exame.\n");
    scanf("%lf",&n5);
    printf("Nota do exame: %.1lf\n",n5);
    media2=(media+n5)/2;
    if(media2>=5){printf("Aluno aprovado.\n");}
    else{printf("Aluno reprovado.\n");}
    printf("Media final: %.1lf\n",media2);
}

    return 0;
}
