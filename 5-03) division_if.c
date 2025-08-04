#include <stdio.h>

int main(){
	double i, j;
	printf("나누고 싶은 두 정수를 입력하세요: ");
	scanf("%lf %lf", &i, &j);
	
	if(j == 0){
		printf("You can't divide by 0. \n");
		return 0;
	}
	printf("%f 를 %f 로 나눈 결과는: %f \n", i, j, i/j);
} 
