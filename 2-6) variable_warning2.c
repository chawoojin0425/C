/* 변수 선언시 주의해야 할 점  */
#include <stdio.h>

int main(){
	int a, A; // a와 A는 각기 다른 변수입니다. 
	int 1hi; // (오류) 변수 앞에 숫자가 위치할 수 없습니다.
	int hi123, h123i, h1234321; // 숫자가 뒤에 위치하면 괜찮습니다.
	int 한글이좋아;
	/*
	(오류)
	변수는 오직 알파벳, 숫자, 그리고_ (underscore)로만으로 이루어져야 합니다. */ 
	int space bar;
	/*
	(오류)
	변수의 이름에는 띄어쓰기를 하면 안됩니다. 그 대신_ 로 대체하는 것이 읽기 좋습니다. */
	int space_bar; //이것은 괜찮습니다.
	int enum, long, double, int;
	/*
	(오류)
	지금 나열한 이름들은 모두 '예약어' 로 C언어에서 이미 쓰이고 있는 
	것들입니다. 따라서 이러한 것들은 쓰면 안됩니다. 이를 구분하는 방법은
	예약어를 모두 외워야 합니다. */ 
}
