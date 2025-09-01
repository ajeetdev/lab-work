#include <stdio.h>

int main(){
	
	float far, cel;
	
	printf("Enter the temperature in fahrenheit : ");
	scanf("%f",&far);
	
	cel=(far-32)*5/9;
	
	printf("\nThe value of %.2f fahrenheit in celsius is : %.2f",far, cel);
	
	
	return 0;
}
