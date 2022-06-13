#include<stdio.h>


void merge(int a[],int low,int mid,int high){
	int i,j,k,b[high +1];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;k++;
		}else{
			b[k]=a[j];
			j++;k++;
		}
	}
	while(i<=mid){
		b[k]=a[i];
		i++;k++;
	}
	while(j<=high){
		b[k]=a[j];
		j++;k++;
	}
	for(int i=low;i<=high;i++){
		a[i]=b[i];
	}
}

void mergeSort(int a[],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}

void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main(){
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n=6;
	printArray(arr,n);
	mergeSort(arr,0,n-1);
	printArray(arr,n);
	return 0;
}
