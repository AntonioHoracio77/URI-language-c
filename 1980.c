#include <stdio.h>
#include <string.h>
int main() {
char n[15];
long long int tam,anagramas,c;
while(1){
    scanf("%s",n);
    if(n[0]=='0'){break;}
    tam=strlen(n);
    anagramas=1;
    for(c=1;c<=tam;c++){
        anagramas=anagramas*c;
    }
    printf("%lli\n",anagramas);
    
}
    return 0;
}
