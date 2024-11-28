#include<stdio.h>
int main(){
	int i,j,n;

	printf("moi ban nhapp vao mot so nguyen\n");
	
	scanf("%d",&n);
	int number[n][n];
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			printf("number[%d][%d] \n",i,j);
			scanf("%d",&number[i][j]);
		}
	}
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			printf("  %d   ",number[i][j]);
			 
		
		}
		printf("\n");
	}
	
	return 0;
}
