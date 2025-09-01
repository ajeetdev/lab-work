#include <stdio.h>

int main(){
	
	int n, sNum;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	sNum=n*(n+1)/2;
	printf("Sum of first %d natural number is %d ",n,sNum);
	

	
	return 0;
}
