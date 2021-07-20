#include <stdio.h>
#include <string.h>
int main(){
  char linha[101],linha2[101];
  
 while(scanf("%s %s",linha,linha2)!=EOF){
if(strstr(linha,linha2)){
      printf("Resistente\n");
      }
else{
    printf("Nao resistente\n");
    }
 }  
   return 0; 
}
