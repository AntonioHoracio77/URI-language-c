#include <stdio.h>

int main(){
	int lin,col,lin1,col1,lin2,col2;
		while(scanf("%d %d",&lin,&col)!=EOF){
			int mat[lin][col],i,j;
			for(i=0;i<lin;i++){
				for(j=0;j<col;j++){
					scanf("%d",&mat[i][j]);
					if(mat[i][j] == 1){
						lin1 = i;
						col1 = j;
					}
					else if(mat[i][j]==2){
						lin2 = i;
						col2 = j;
					}
				}
			}
			printf("%d\n",abs(lin1-lin2)+abs(col1-col2));
		}
	return 0;
}
