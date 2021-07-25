#include <stdio.h>
#include<math.h>
int main(){
	double h,ang,comp,tang,result;
		while(scanf("%lf %lf %lf",&ang,&comp,&h)!=EOF){
			tang = tan((ang* 3.141592654)/180);
			result = (h+(comp*tang))*5;
			printf("%.2lf\n",result);
			
		}
	return 0;
}
