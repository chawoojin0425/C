/* if-else 죽음의 숫자?  */

#include <stdio.h>

int main(){
	int num;
	
	printf("Insert any number: ");
	scanf("%d", &num);
	
	if(num == 7){
		printf("행운의 숫자 7이군요! \n");
	} else {
		if( num == 4){
			printf("죽음의 숫자 4인가요 ;;; \n");
		} else {
			printf("그냥 보통 숫자인 %d네요. \n", num); 
		}
	}
}
