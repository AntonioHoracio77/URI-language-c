#include <stdio.h>
int main(){
	double a,sum=0,c,cont=0;
	int n;
	n=1;
	while(n!=2){
		scanf("%lf",&a);
		if(a>=0 && a<=10){
			sum=sum+a;
			cont++;
		}
		else{
			printf("nota invalida\n");
		}
		if(cont==2){
			printf("media = %.2lf\n",sum/2);
			cont=0;
			sum=0;
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&n);
		}
		if(n!=1 && n!=2){
			for(c=1;c;c++){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&n);	
			if(n==1 || n==2){
			break;
			}
		}
		}

		
	}
	return 0;
}
