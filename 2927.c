#include <stdio.h>
 
int main() {
  int n1,n2,n3,n4;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    if(n2-(n3+n4+1)>=n1){
        printf("Igor feliz!\n");
    }
    else if(n2-(n3+n4+1)<n1 && n3>n4/2){
        printf("Caio, a culpa eh sua!\n");
    }
    else if(n2-(n3+n4+1)<n1){
        printf("Igor bolado!\n");
    }

    return 0;
}
