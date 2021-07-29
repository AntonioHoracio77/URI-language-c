#include <stdio.h>
 
int main() {
 int n,x,anao=0,hobbit=0,mago=0,elfo=0,humano=0;
 char h[20],k;
 scanf("%d",&n);
 while(n--){
     scanf("%s %c",h,&k);
     if(k=='X'){
     hobbit=hobbit+1;
     
 }
    else if(k=='A'){
     anao=anao+1;
     
 }
    else if(k=='E'){
     elfo=elfo+1;
     
 }
    else if(k=='H'){
     humano=humano+1;
     
 }
     else if(k=='M'){
     mago=mago+1;
     
 }
 }
printf("%d Hobbit(s)\n",hobbit);
printf("%d Humano(s)\n",humano);
printf("%d Elfo(s)\n",elfo);
printf("%d Anao(s)\n",anao);
printf("%d Mago(s)\n",mago);
    return 0;
}
