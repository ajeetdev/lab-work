#include <stdio.h>

int main(){
	
	int num1, num2, num3;
	
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second  number : ");
	scanf("%d",&num2);
	printf("Enter third number : ");
	scanf("%d",&num3);
	printf("\n");
	
	printf("Number1 : %d\n",num1);
	printf("Number2 : %d\n",num2);
	printf("Number2 : %d\n",num3);
	printf("\n");
	
	
	if (num1>num2 && num1>num3){
		printf("number1 = %d is greatest among three ",num1);
	}else if(num2>num1 && num2>num3){
		printf("number2 = %d is greatest among three",num2);
	}else{
		printf("number3 = %d is geatest among three ",num3);
	}
	
	

	
	return 0;
}
