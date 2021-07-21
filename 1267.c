#include <stdio.h>


int main(){
    int i,j,Nalumni,festas,resultado,cont;
        while(1){
        	resultado = 0;
            scanf("%d %d",&Nalumni,&festas);
            int vet[festas][Nalumni];
            if(Nalumni == 0 && festas == 0){
                break;
            }
            for(i=0;i<festas;i++){
                for(j=0;j<Nalumni;j++){
                    scanf("%d",&vet[i][j]);
                }
            }
            for(i=0;i<Nalumni;i++){
            	cont = 0;
            	for(j=0;j<festas;j++){
            		cont=cont+vet[j][i];
				}
				if(cont==festas){
					resultado++;
				}
			}
            if(resultado>=1){
            	printf("yes\n");
			}
			else{
				printf("no\n");
			}
            cont = 0;
        }
        return 0;
}
