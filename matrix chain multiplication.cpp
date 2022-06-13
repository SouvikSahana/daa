#include<stdio.h>
int MCM(int arr[],int n){
	int main[n][n];
	int j,q;
	for(int i=0;i<n;i++){
		main[i][i]=0;
	}
	for(int L=2;L<n;L++){
		for(int i=1;i<n-L+1;i++){
		j=i+L-1;
		main[i][j]=999999999;
		for(int k=i;k<=j-1;k++){
			q=main[i][k]+main[k+1][j]+ arr[i-1]*arr[k]*arr[j];
			if(q<main[i][j])
			main[i][j]=q;
		}	
		}
	}
	return main[1][n-1];
}
int main(){
	int arr[]={5,4,6,2,7};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Result of matrix chain : %d",MCM(arr,size));
	return 0;
}
