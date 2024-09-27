#include <stdio.h>
int main(){
	int a=5; // binary; 0101
	int count = 0;
	count+= a & 1;
    count+= (a >> 1) & 1;
    count+= (a >> 2) & 1;
    count+= (a >> 3) & 1;
	printf("Number of 1s in binary representation of %d: %d\n", a, count);		
}