#include <stdio.h>
#include <string.h> 
int main() {
 char n[501];
 int qnt;
 scanf("%[^\n]",&n);
 qnt=strlen(n);
 if(qnt>80){
     printf("NO\n");
 }
 else{
     printf("YES\n");
 }
 
    return 0;
}
