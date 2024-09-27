#include <stdio.h>
int main(){
	int Attendance; 
	char Grade;
	float Scores, ExamResults, AWeightage, SWeightage, ERWeightage, TotalWeightage;
	
	printf("Enter your attendance(0-100): ");
	scanf("%d", &Attendance);
	printf("Enter your assignment scores(0-100): ");
	scanf("%f", &Scores);
	printf("Enter your exam results(0-100): ");
	scanf("%f", &ExamResults);
	
	if(Attendance >= 80){
		AWeightage = 20;
	}else if(Attendance >= 70){
		AWeightage = 15;
	}else if(Attendance >= 60){
		AWeightage = 10;
	}else if(Attendance >= 50){
		AWeightage = 5;
	}else{
		AWeightage = 0;
	}
	
	if(Scores >= 90){
		SWeightage = 30;
	}else if(Scores >= 80){
		SWeightage = 25;
	}else if(Scores >= 70){
		SWeightage = 20;
	}else if(Scores >= 60){
		SWeightage = 15;
	}else if(Scores >= 50){
		SWeightage = 10;
	}else{
		SWeightage = 5;
	}
	
	if(ExamResults >= 90){
		ERWeightage = 50;
	}else if(ExamResults >= 80){
		ERWeightage = 40;
	}else if(ExamResults >= 70){
		ERWeightage = 30;
	}else if(ExamResults >= 60){
		ERWeightage = 20;
	}else if(ExamResults >= 50){
		ERWeightage = 10;
	}else{
		ERWeightage = 5;
	}
	
	TotalWeightage = AWeightage + SWeightage + ERWeightage;
	printf("The Final Weightage is %f\n", TotalWeightage);
	
	if(TotalWeightage >= 90){
		Grade = 'A';
	}else if(TotalWeightage >= 80){
		Grade = 'B';
	}else if(TotalWeightage >= 70){
		Grade = 'C';
	}else if(TotalWeightage >= 60){
		Grade = 'D';
	}else if(TotalWeightage >= 50){
		Grade = 'E';	
	}else{
		Grade = 'F';
	}
	
	printf("The Final Grade is %c", Grade);
	return 0;	
}