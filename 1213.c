#include <stdio.h>

int main(){
	long long int n,num,cont;
		while(scanf("%lli",&n)!=EOF){
			num = 1;
			cont = 1;
			while(num%n!=0){
				num = (10*num+1)%n;
				cont++;
			}
			printf("%lli\n",cont);
		}
	return 0;
}
