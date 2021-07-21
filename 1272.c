#include <stdio.h>
#include <string.h>

int main() {
	int n,i,aux;
	char string[60];
		scanf("%d",&n);
		getchar();
		while(n--){
			fgets(string,60,stdin);
			if(string[0]!=' ')
				printf("%c",string[0]);
 			for(i=0;i<strlen(string);i++){
				if(string[i]==' ' && string[i+1]!=' ' && i+1!= strlen(string) && string[i+1]!='\n'){
					printf("%c",string[i+1]);
				}
			}
			printf("\n");
			
		}
		
		
	return 0;
}
