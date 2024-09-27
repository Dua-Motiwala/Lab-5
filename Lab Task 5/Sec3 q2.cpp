#include <stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	num > 0 ? printf("Number is positive.\n") : num < 0 ? printf("Number is negative.\n") : printf("Number is zero.\n");
	return 0;
}