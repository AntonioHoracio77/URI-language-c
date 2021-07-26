#include <stdio.h>
int main(){
	long int d,p,i,aux;
	float porc = 1;
		scanf("%li %li",&d,&p);
		aux = d-p+1;
		for(i=aux;i<=d;i++)
			porc = porc*((i*1.00)/(d*1.00));
		printf("%.2lf\n",(1-porc)*100);
	
	return 0;
}
