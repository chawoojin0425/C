/*
#include <stdio.h>

int main(){
	int a;
	printf("Insert any number: ");
	scanf("%d", &a);
	
	if(a>=10){
		if(a<20){
			printf("%d 는 10이상 20미만인 수이다. \n",a);
		}
	}
}
*/

#include <stdio.h>

int main(){
	int a;
	printf("Insert any number: ");
	scanf("%d", &a);
	if(a>=10 && a<20){
		printf("%d 는 10이상 20미만인 수이다. \n",a);
	}
	
}
