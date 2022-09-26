#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 
// 해석할 필요없고 눈크게 뜨고 찾을 필요없이
// 자유롭게 코딩이 가능한 부분입니다.
// 마음편히 코딩하시면됩니다.
// 가끔 int answer = 0; 위에 //여기에 코드를 작성해주세요
// 라고 표시되어 있는 것을 보고 int answer = 0 은 그대로 둬야 하는 질문을 하십니다.
// solution 함수를 자유롭게 아무곳이나 작성해도 괜찮습니다.
// 추가적으로 위에 include 를 추가하셔도 됩니다.

int solution(int price, char* grade) {
	int answer = 0;
	if (grade == "V") {
		answer = price * 0.85;
	}
	else if (grade == "S") {
		answer = price * 0.95;
	}
	return answer;
}

int main() {
	int price1 = 2500;
	char* grade1 = "V";
	int ret1 = solution(price1, grade1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int price2 = 96900;
	char* grade2 = "S";
	int ret2 = solution(price2, grade2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
