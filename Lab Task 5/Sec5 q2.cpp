#include <stdio.h>
int main(){
	int a=125;
	int sum=0;
	sum += a % 10; // Get the last digit 
	a /= 10;       // Remove the last digit(3)
	sum += a % 10; // Get the last digit
	a /= 10;       // Remove the last digit(2)
	sum += a % 10; // Get the last digit
	a /= 10;       // Remove the last digit(1)
	
	printf("The sum of digits of a is %d\n", sum);
}