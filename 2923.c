#include <stdio.h>
 
int main() {
  int tamGB,armGB,porW,porC;
  float porcentagem1,porcentagem2,critical,warning;
    while(scanf("%d %d %d %d",&tamGB,&armGB,&porW,&porC)!=EOF){
    porcentagem1=tamGB*porW*0.01;
    porcentagem2=tamGB*porC*0.01;
    warning=armGB-porcentagem1;
    critical=armGB-porcentagem2;
    if(critical<0){
        critical=critical*-1;
    }
    if(warning<0){
        warning=warning*-1;
    }
    if(porcentagem1>armGB && porcentagem2>armGB){
        printf("OK\n");

    }
    else if(warning>critical){
        printf("critical\n");

    }
    else if(warning<critical){
        printf("warning\n");

    }
    }
    return 0;
}
