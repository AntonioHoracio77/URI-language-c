#include <stdio.h>
#include <string.h>

int main() {
    long long int n,number,tam,c,fat;
    char ex[21];
    scanf("%lli",&n);
    while(n--){
        scanf("%lli %s",&number,ex);
        tam=strlen(ex);
        fat=1;
        for(c=1;c<=number;c++){
            if(number-tam*c<=0){
                break;
            }
            fat = fat*(number-(tam*c));
        }
        printf("%lli\n",fat*number);
        
    }
    return 0;
}
