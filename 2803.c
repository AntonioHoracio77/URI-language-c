#include <stdio.h>
#include <string.h>
int main(){
	char est[20],a[10]={'a','m','a','z','o','n','a','s'},b[10]={'a','m','a','p','a'},c[10]={'t','o','c','a','n','t','i','n','s'},d[10]={'a','c','r','e'};
	char e[10]={'r','o','r','a','i','m','a'},f[10]={'r','o','n','d','o','n','i','a'},g[10]={'p','a','r','a'};
	scanf("%s",&est);
	if(strcmp(est,a)==0 || strcmp(est,b)==0 || strcmp(est,c)==0 || strcmp(est,d)==0 || strcmp(est,e)==0 || strcmp(est,f)==0 || strcmp(est,g)==0 ){
		printf("Regiao Norte\n");
		
	}
	else{
		printf("Outra regiao\n");
	}

	return 0;
