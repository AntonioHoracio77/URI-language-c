#include <stdio.h>
#include <string.h>

int main() {
	int n,qnt,i;
	char string[110];
		scanf("%d",&n);
		getchar();
		while(n--){
			fgets(string,110,stdin);
			qnt = strlen(string)/2;
			for(i =qnt-1;i>=0;i--){
				if(string[i]!='\n')
					printf("%c",string[i]);}
				
			for(i =strlen(string)-1;i>=qnt;i--){
				if(string[i]!='\n')
					printf("%c",string[i]);}
			printf("\n");
			
		}
	return 0;
}
