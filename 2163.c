#include <stdio.h>
int main() {
    int lin,col;
	int i,j,c,Lsabre = 0,Csabre = 0;
        scanf("%d %d",&lin,&col);
        int mat[lin][col];
        for(i=0;i<lin;i++)
            for(j=0;j<col;j++)
                scanf("%d",&mat[i][j]);
		for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
            	if(mat[i][j] == 42){
            		if(i+1!=lin && j+1!=col && i-1>=0 && j-1>=0)
            			if(mat[i][j-1]==7 && mat[i+1][j-1]==7 && mat[i-1][j-1]==7 && mat[i+1][j] == 7 && mat[i-1][j]== 7 && mat[i][j+1]==7 && mat[i+1][j+1]==7 && mat[i-1][j+1]==7){
						Lsabre = i;
						Csabre = j;
						}
				}
			}
		}
		if(Csabre!=0 && Lsabre!=0)
			printf("%d %d\n",Lsabre+1,Csabre+1);
		else
			printf("0 0\n");
        
    return 0;
}
