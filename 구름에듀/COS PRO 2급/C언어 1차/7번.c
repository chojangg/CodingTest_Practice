#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 한 줄 수정하기
// 보통은 다른곳이 아닌 solution 함수내의 한 줄을 수정합니다.
// 한 줄 수정의 유형은 기호수정하기, , 한줄 전체가 수정되기 등으로
// 수정되는 곳이 같은 줄에서 2곳 이상이 될 수도 있습니다.
// 모든 문제가 그렇듯 문제를 잘 읽어보면 그안에 정답이 있습니다.
// 14, 15, 16번줄은 첫번째 글자를 저장하기 위한 부분 입니다.
// 그럼 다음 반복문에서는 부터 저장을 해야 할까요?
// 19번줄 for 를 확인해봅니다.


char* solution(char* characters) {
	char* result = malloc(sizeof(char) * strlen(characters));
	int result_len = 0;
	result[0] = characters[0];
	result_len++;
	for (int i = 1; i < strlen(characters); i++) {
		if (characters[i - 1] != characters[i]) {
			result[result_len] = characters[i];
			result_len++;
		}
	}
	result[result_len] = NULL;
	return result;
}

int main() {
	char* characters = "senteeeencccccceeee";
	char* ret = solution(characters);

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}