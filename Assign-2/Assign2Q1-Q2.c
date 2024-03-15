//C program to find sum of two matrices
#include<stdio.h>

void sum_sub_matrix(int r1, int c1, int a[20][20], int b[20][20], int c[20][20], int d[20][20]){

		printf("\nEnter Value for first matrix");
		printf("\n");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("Enter the value for a[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		
		printf("\nEnter Value for second matrix");
		printf("\n");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("Enter the value for a[%d][%d] : ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		
		printf("\nResult after summation : ");
		
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("\nValue of a[%d][%d] is : %d",i,j,c[i][j]);
			}
		}
		printf("\n");
		printf("\nResult after subtraction : ");
		
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				d[i][j] = a[i][j] - b[i][j];
			}
		}
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("\nValue of a[%d][%d] is : %d",i,j,d[i][j]);
			}
		}
}


int main() {
	int a[20][20],b[20][20],c[20][20],d[20][20];
	int c1,c2,r1,r2;
	printf("Enter the number of rows & columns in first matrix : ");
	scanf("%d %d",&r1,&c1);
	printf("Enter the number of rows & columns in secong matrix : ");
	scanf("%d %d",&r2,&c2);
	
	if(c1==c2 && r1==r2){
		sum_sub_matrix(r1, c1, a, b, c, d);
	}
	else {
		printf("Invalid Input");
	}
	
	return 0;
}