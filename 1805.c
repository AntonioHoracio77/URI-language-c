#include <stdio.h>
int main(){
	long long int a,b,PA;
		scanf("%lli %lli",&a,&b);
		PA = ((a+b)*(abs(a-b)+1))/2;
		printf("%lli\n",PA);
	return 0;
}
