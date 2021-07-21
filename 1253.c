#include <stdio.h>
#include <string.h>

int main() {
	int n,pulo,i;
	char string[60];
		scanf("%d",&n);
		while(n--){
			scanf("%s",string);
			scanf("%d",&pulo);
			for(i=0;i<strlen(string);i++){
				if(string[i]-pulo<65)
					printf("%c",(string[i]-pulo)+26);
				else
					printf("%c",(string[i]-pulo));
			}
			printf("\n");
		}
		
	return 0;
}
