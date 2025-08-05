/* 새로쓰는 죽음의 숫자 예제  */
#include <stdio.h>

int main(){
	int num;
	
	printf("Insert any number: ");
	scanf("%d",&num);
	
	if(num == 7){
		printf("Lucky 7! \n");
	} else if (num == 4){
		printf("죽음의 숫자 4;;; \n");
	} else {
		printf("그냥 평범한 숫자 %d \n", num);
	}
}
