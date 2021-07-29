#include <stdio.h>
 
int main() {
 double n[12][12];
 double sum=0,sum2=0,l;
 int i,j;
 char x;
 scanf("%c",&x);
 for(i=0;i<12;i++){
     for(j=0;j<12;j++){
          scanf("%lf",&n[i][j]);
          sum2=sum2+n[i][j];
 }
 }
 for(i=0;i<=11;i++){
     for(j=0;j<=11-i;j++){
         sum=sum+n[i][j];
     }
 }
l=sum2-sum;
if(x=='M')l=l/66;
 printf("%.1lf\n",l);

 
    return 0;
}
