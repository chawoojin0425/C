#include <stdio.h>

int main(){
	int num;
	
	printf("Insert any number: ");
	scanf("%d", &num);
	
	if(num == 7){
		printf("Lucky 7! \n");
	}	else{
		printf("그냥 보통 숫자인 %d를 입력했군요. \n", num);
	}
	
}
