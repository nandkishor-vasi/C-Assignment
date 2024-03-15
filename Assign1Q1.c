//C program to swap first element with last, second to second last and so on (reversing elements)
#include<stdio.h>
int main() {
    int old[20],new[20],l;
    printf("Enter the length of Array : ");
    scanf("%d",&l);
    for(int i=0; i<l;i++){  					//Taking input from user
        printf("Enter the %d number : ",i+1);
        scanf("%d",&old[i]);
    }
    printf("\n");
    printf("Array before swap : ");
    for(int k=0; k<l;k++){						 //Printing array before swap
        printf("\nNumber at %d : %d",k+1,old[k]);
    }
    printf("\n");
    printf("\nArray after swap : ");
    for(int j=0;j<l;j++) {						//Printing array after swap
    	new[j]=old[l-j-1];
    	printf("\nNumber at %d : %d",j+1,new[j]);
    }
    return 0;
}