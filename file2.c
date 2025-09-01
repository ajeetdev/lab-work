
#include <stdio.h>

int main(){
	int num;
	char x;
	char name[30];
	float num1;
	double num2;
	unsigned int y;
	int octal1;
	
	printf("Please Enter a character : ");
	scanf("%c",&x);
	
	
	printf("\n enter a number : ");
	scanf("%d",&num);
	
	
	printf("\n Enter your name : ");
	scanf("%s",name);
	
	
	printf("\n Enter a float value : ");
	scanf("%f",&num1);
	
	printf("\n Enter a double value : ");
	scanf("%lf",&num2);
	
	//printf("\n Enter a unsigned number :");

	printf("\n Enter a octal value ");
	scanf("%o",&octal1);
	
	printf("\n Your character  is %c",x);
	printf("\n your float value is %f",num1);
	printf("\n your number is : %d",num);
	printf("\n Your double value is %lf ",num2);
	printf("\n string %s", name);
	printf("\n your octal is : %o and decimal is : %d",octal1,octal1);
	
	return 0;
}
