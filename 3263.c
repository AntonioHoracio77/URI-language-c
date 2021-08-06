#include <stdio.h>
#include <string.h>

int main() {
    unsigned short n,i;
    char codigo[1010],final[1010];
        scanf("%hu",&n);
        scanf("%s",codigo);
        scanf("%s",final);
        while(n--){
            for(i=0;i<strlen(codigo);i++){
                if(codigo[i]=='1')
                    codigo[i] = '0';
                else
                    codigo[i] = '1';
            }
        }
        if(strstr(codigo,final))
            printf("Deletion succeeded\n");
        else
            printf("Deletion failed\n");
 
    return 0;
}
