#include<stdio.h>
int main(){
	int number[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6,}};
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf(" %d",number[i][j]);
		
		}
		printf("\n");
	}
	
	return 0;
}
