#include <stdio.h>

int main(){
	float avg_score;
	float math, english, science, programming;
	
	printf("Insert math, english, science and programming scores: ");
	scanf("%f %f %f %f", &math, &english, &science, &programming);
	
	avg_score = (math + english + science +programming) / 4;
	printf("Your average score is %f. \n", avg_score);
	if(avg_score>=90){
		printf("Excellent! \n");
	} else if(avg_score>=30){
		printf("Good job! \n");
	} else {
		printf("Try hard! \n");
	}
	
	return 0;
} 
