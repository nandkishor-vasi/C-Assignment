//C program to find nearest lesser and greater element in an array
#include<stdio.h>

int greater_element(int l, int n, int arr[]) {			//declaring greater_element funtion
	int ptr;
	for(int i=0;i<l;i++){
		ptr = arr[i];
		if(ptr>n && ptr<arr[i+1]){
			return ptr;
		}	
	}
	return 0;
}

int lesser_element(int l, int n, int arr[]) {  			//declaraing lesser_element function
	int ptr, less=0;
	for(int i=0;i<l;i++){
		ptr = arr[i];
		if(ptr<n && ptr>less){
			less = arr[i];
		}	
	}
	return less;
}
int main(){
	int arr[20],l,n;
	printf("Enter the length of array : ");
	scanf("%d",&l);
	
	for(int i=0;i<l;i++){							//Taking input from user
        printf("Enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
	}
	
	printf("Enter the number to compare : ");		//Number to compare
	scanf("%d",&n);
	
	int greater = greater_element(l, n, arr);		//calling greater_element function
	int lesser = lesser_element(l, n, arr);			//calling lesser_element function
	
	printf("\nNearest greater number is : %d",greater);
	printf("\nNearest lesser number is : %d",lesser);
	return 0;
}