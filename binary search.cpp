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
int low,high,mid;

	low=0;
	high=size-1;
	mid=(low+high)/2;
	
	while(low<=high){
		if(array[mid]<key){
			low=mid+1;
		}else if(array[mid]==key){
			printf("Found the number");
			break;
		}else{
			high=mid-1;
		}
		mid=(high+low)/2;
	}
	
	if(low>high){
		printf("Number not found...");
	}
	return 0;
}
