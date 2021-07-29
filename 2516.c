#include <stdio.h>

int main() {
    float dist,vel1,vel2,i;
	float tempo;
    	while(scanf("%f %f %f",&dist,&vel1,&vel2)!=EOF){
    		if(vel2>=vel1){
    			printf("impossivel\n");
			}
			else{
				tempo = dist/(vel1-vel2);
				printf("%.2f\n",tempo);
				}
			}
    return 0;
}
