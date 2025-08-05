/* if와 if-else if의 차이 */

#include <stdio.h>

int main(){
	int num;
	
	printf("Insert any number: ");
	scanf("%d", &num);
	
	if(num == 7){
		printf("a Lucky 7! \n");
	} else if( num == 7){ // 위 if문이 참이 아닐 때만 실행 => 건너뜀. 
		printf("b Lucky 7! \n");
	}
	
	if(num == 7){
		printf("c Lucky 7! \n");
	}
	if(num == 7){
		printf("d Lucky 7! \n");
	}
}
