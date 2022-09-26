#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 
// 해석할 필요없고 눈크게 뜨고 찾을 필요없이
// 자유롭게 코딩이 가능한 부분입니다.
// 마음편히 코딩하시면됩니다.
// 가끔 int answer = 0; 위에 //여기에 코드를 작성해주세요
// 라고 표시되어 있는 것을 보고 int answer = 0 은 그대로 둬야 하는 질문을 하십니다.
// solution 함수를 자유롭게 아무곳이나 작성해도 괜찮습니다.
// 추가적으로 위에 include 를 추가하셔도 됩니다.


int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	// 여기에 코드를 작성해주세요.
	int arr[6];
	answer = arr;
	for (int i = 0; i < shirt_size_len; i++) {
		if (shirt_size[i] == "XS") arr[0]++;
		else if (shirt_size[i] == "S") arr[1]++;
		else if (shirt_size[i] == "M") arr[2]++;
		else if (shirt_size[i] == "L") arr[3]++;
		else if (shirt_size[i] == "XL") arr[4]++;
		else if (shirt_size[i] == "XXL") arr[5]++;
	}
	return answer;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution 함수의 반환 값은 {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} 입니다.\n");
}
