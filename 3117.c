#include <stdio.h>
 
int main() {
long int horario,cont=0,minimo,qntalunos;
scanf("%li %li",&qntalunos,&minimo);
while(qntalunos--){
    scanf("%li",&horario);
    if(horario<=0){
        cont++;
    }
}
if(cont>=minimo){
    printf("YES\n");
}
else{
    printf("NO\n");
}
    return 0;
}
