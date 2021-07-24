#include <stdio.h>
 
int main() {
long int n,x,d,c,cont=0,primo1,primo2,e,f;
scanf("%li %li",&n,&x);

for(c=1;c<=n;c++){
    for(d=1;d<=c;d++){
      if(c%d==0){cont++;}
    }
      if(cont==2 ){
          primo1=c;
      }
    cont=0;
}
cont=0;
for(e=1;e<=x;e++){
    for(f=1;f<=e;f++){
      if(e%f==0){cont++;}
    }
       if(cont==2){
          primo2=e; 
      }
    cont=0;
}
printf("%li\n",primo1*primo2);
    return 0;
}
