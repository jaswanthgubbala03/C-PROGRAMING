#include<stdio.h>
int main()
{
	float f,c;
	printf("enter value of fahrenheit :");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("celsius value is :%f",c);
	return 0;
}
