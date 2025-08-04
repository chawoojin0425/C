/* 합격? 불합격? */

#include <stdio.h>

int main(){
	int score;
	
	printf("Insert your math score: ");
	scanf("%d", &score);
	
	if(score>=90){
		printf("You passed! \n");
	}
	if(score<90){
		printf("You failed! \n");
	}
	
	return 0;
}
