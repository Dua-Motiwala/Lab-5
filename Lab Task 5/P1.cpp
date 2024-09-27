#include <stdio.h>
int main(){
	int a, b, c;
	printf("Enter values for a,b,c: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a > b && a > c){
		printf("%d is the greatest of three numbers", a);
	}
	else if(b > a && b > c){
		printf("%d is the greatest of three numbers", b);
	}
	else{
		printf("%d is the greatest of three numbers", c);
	}
	return 0;
}