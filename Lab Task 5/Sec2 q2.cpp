#include <stdio.h>
int main(){
	int age;
	int citizenship;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your citizenship status(1 for yes or 0 for no): ");
	scanf("%d", &citizenship);
	
	if(citizenship != 0 && citizenship != 1){
		printf("Error Citizenship must be 0 or 1.\n");
		return 0;
	}
	
	if(age >= 18 && citizenship == 1){
		printf("Person is eligible to vote.\n");
	}else{
		printf("Person is not eligible to vote.\n");
	}
	return 0;	    
}