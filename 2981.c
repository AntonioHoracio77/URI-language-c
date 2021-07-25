#include <stdio.h>
int main(){
	int a,b,dias = 0;
		scanf("%d %d",&a,&b);
		while(a>=b){
			a = a - b;
			dias++;
		}
		if(dias+21<=30)
			printf("A UFSC fecha dia %d de setembro.\n",dias+21);
		else
			printf("A UFSC fecha dia %d de outubro.\n",dias-9);
	
	return 0;
}
