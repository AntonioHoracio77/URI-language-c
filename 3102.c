#include <stdio.h>
int main(){
	long int x1,y1,x2,y2,x3,y3,n;
	long int c_determinante,determinante;
	double area;
		scanf("%d",&n);
		while(n--){
			scanf("%li %li %li %li %li %li",&x1,&y1,&x2,&y2,&x3,&y3);
			determinante = (x1*y2*1)+(y1*1*x3)+(1*x2*y3);
		    c_determinante = (y1*x2*1)+(x1*1*y3)+(1*y2*x3);
		    area = abs(determinante-c_determinante)/2.0;
		    printf("%.3lf\n",area);
    	}
	
	return 0;
}
