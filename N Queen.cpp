#include<stdio.h>
#include<math.h>
int a[30],count=0;
int place(int k){
	int i;
	for(i=1;i<k;i++){
		if((a[i]==a[k])||((abs(a[i]-a[k])==abs(i-k))))
		return 0;
	}
}
void print_sol(int n){
	int i,j;
	count++;
	printf("Solution no : #%d \n",count);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i]==j)printf("Q\t");
			else printf("*\t");
		}
		printf("\n");
	}
}
void Queen(int n){
	int k=1;
	a[k]=0;
	while(k!=0){
		a[k]=a[k]+1;
		while(a[k]<=n && !place(k)){
			a[k]++;
		}
		if(a[k]<=n){
			if(k==n){
				print_sol(n);
			}else{
				k++;
				a[k]=0;
			}
		}else
		k--;
	}
}
int main(){
	int n;
	printf("Enter number of Queens: ");
	scanf("%d",&n);
	Queen(n);
	printf("Total number of solutions: %d",count);
	return 0;
}
