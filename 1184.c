#include <stdio.h>
 
int main() {
 double sum=0.0,n[12][12],sum2=0.0,l,cont1=0,cont=0;
 int i,j;
 char x[2];
 scanf("%s",&x);
 for(i=0;i<12;i++){
     cont1++;
     for(j=0;j<12;j++){
          scanf("%lf",&n[i][j]);
         cont++;
         if (cont<=cont1){
             sum=sum+n[i][j];
         }
         	if(i==j){
         	    sum2=sum2+n[i][j];
         	}
     }
     cont=0;
     j++;
 }
 l=sum-sum2;
 if(x[0]=='M'){
 	printf("%.1lf\n",l/66.0);
 }
 else if(x[0]=='S'){
 	printf("%.1lf\n",l);
 }
 
    return 0;
}
