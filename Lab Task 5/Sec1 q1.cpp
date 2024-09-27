#include <stdio.h>
int main(){
	int age;
	printf("Enter the person's age: ");
	scanf("%d", &age);
	
	if(age<=12){
		printf("The person is a Child.\n");
	}else if(age<=19){
		printf("The person is  Teenager.\n");
	}else if(age<=60){
		printf("The person is an Adult.\n");
	}else{
		printf("The person is a Senior.\n");
	}
	return 0;
}
	