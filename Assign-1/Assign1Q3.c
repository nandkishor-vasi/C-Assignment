//C program to find two largest elements in a one dimensional array
#include<stdio.h>
int main() {
	int a[20],l,max,sec_max;
	printf("Enter the length of array  : ");
	scanf("%d",&l);
	
	for(int i=0;i<l;i++){					 //Taking input from user
		printf("Enter %d number : ",i+1);
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	sec_max=a[1];
	for(int j=0;j<l;j++){					//Checking for max value
		
		if(a[j]>max){
			max=a[j];
		}
	}
	
	for(int j=0;j<l;j++){					//Checking for second max value
		if(a[j]>sec_max && a[j]<max){
			sec_max = a[j];
		}
	}	
	
	//printing value
	printf("\nFirst largest value : %d",max);
	printf("\nSecond largest value : %d",sec_max);
	return 0;
}