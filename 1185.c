#include <stdio.h>
 
int main() {
 double n[12][12];
 double sum=0;
 int i,j;
 char x;
 scanf("%c",&x);
 for(i=0;i<12;i++){
     for(j=0;j<12;j++){
          scanf("%lf",&n[i][j]);
 }
 }
 for(i=0;i<=10;i++){
     for(j=0;j<=10-i;j++){
         sum=sum+n[i][j];
     }
 }

if(x=='M')sum=sum/66;
 printf("%.1lf\n",sum);

 
    return 0;
}
