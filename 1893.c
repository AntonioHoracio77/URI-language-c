#include <stdio.h>
 
int main() {
int n,x;
scanf("%d %d",&n,&x);
if (n>= 0 && x<= 2) {
    printf("nova\n");
} 
else if (x> n && x<= 96) {
    printf("crescente\n");
} 
else if (n >= x && x <= 96) {
     printf("minguante\n");
} 
else { 
    printf("cheia\n");
        }
 
    return 0;
}
