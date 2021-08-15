#include <stdio.h>
#include <string.h>
struct elementos{
	char natal[100];
	char idioma[100];

};
int main() {
	char nome[100],idioma[100];
	int n,m,i;
		scanf("%d",&n);
		struct elementos p[n];
		for(i=0;i<n;i++){
			scanf(" %[^\n]",p[i].idioma);
			scanf(" %[^\n]",p[i].natal);
		}
		scanf("%d",&m);
		while(m--){
			scanf(" %[^\n]",nome);
			scanf(" %[^\n]",idioma);
			for(i=0;i<n;i++){
				if(strstr(p[i].idioma,idioma)){
					printf("%s\n",nome);
					printf("%s\n\n",p[i].natal);
					break;
				}
			}
		}
	
    return 0;
}
