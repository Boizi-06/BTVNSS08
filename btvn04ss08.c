#include<stdio.h>
int main(){
	int i,j,num=0;
	int number[3][3]={{1,2,3},{2,3,4},{7,8,9}};
	int max=number[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(number[i][j]>max){
				max=number[i][j];
			}
		}
	}
	printf("so lon nhat cua chuoi la %d :\n",max);
	
	return 0;
}
