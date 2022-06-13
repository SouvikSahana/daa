#include<stdio.h>

int main(){
	int array[50],size,i,key;
	printf("enter the size of array : ");
	scanf("%d",&size);
	
	printf("Enter the elements of the array : \n");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	printf("Enter the number to search : ");
	scanf("%d",&key);
	
	for(i=0;i<size;i++){
		if(array[i]==key){
			printf("%d number is found ",key);
			break;
		}
	}
	if(i==size){
		printf("%d is not in the array",key);
	}
	return 0;
}
