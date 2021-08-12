#include <stdio.h>
#include <string.h>
typedef struct{
	char nome[30];
	char aluno[30];
}assinaturas;
typedef struct{
	char aula[30];
	char assin[30];
}aulas;
void result(assinaturas *p,aulas *l,int m,int n);
int main(){
	unsigned short n,m,i;
		while(1){
			scanf("%hu",&n);
			if(n == 0)
				break;
			assinaturas p[n];
			for(i=0;i<n;i++)
				scanf(" %s %s",p[i].nome,p[i].aluno);
			scanf("%hu",&m);
			aulas l[m];
			for(i=0;i<m;i++){
				scanf(" %s %s",l[i].aula,l[i].assin);
			}
			result(p,l,m,n);
			
		}
	
	return 0;
}
void result(assinaturas *p,aulas *l,int m,int n){
	unsigned short i,j,c,errado,falso = 0;
	for(i=0;i<m;i++){
		errado = 0;
		for(j=0;j<n;j++){
			if(strstr(l[i].aula,p[j].nome)){
				for(c=0;c<strlen(p[j].aluno);c++)
					if(p[j].aluno[c]!=l[i].assin[c])
						errado++;
				break;
				}			
		}
		if(errado>1)
			falso++;
	}
	printf("%hu\n",falso);
}
