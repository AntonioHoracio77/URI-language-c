#include <stdio.h>
 
int main() {
 double sum=0.0,n[12][12];
 int k,i,j;
 char x[2];
 scanf("%d",&k);
 scanf("%s",&x);
 for(i=0;i<12;i++){
     for(j=0;j<12;j++){
         scanf("%lf",&n[i][j]);
         if(i==k){
         	sum=sum+n[i][j];
         	
		 }
         
     }
 }
 if(x[0]=='M'){
 	printf("%.1lf\n",sum/12.0);
 }
 else if(x[0]=='S'){
 	printf("%.1lf\n",sum);
 }
 
    return 0;
}
