/* 논리 부정  */

#include <stdio.h>

int main(){
	int height, weight;
	printf("Insert your height and weight: ");
	scanf("%d %d", &height, &weight);
	
	if(height >= 190 || weight >= 100){
		printf("You're a giant. \n");
	}
	if(!(height >=190 || weight >=100)){
		printf("You're not a giant. \n");
	}
	
	return 0;
}
