#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 한 줄 수정하기
// 보통은 다른곳이 아닌 solution 함수내의 한 줄을 수정합니다.
// 한 줄 수정의 유형은 , 값수정하기, 한줄 전체가 수정되기 등으로
// 수정되는 곳이 같은 줄에서 2곳 이상이 될 수도 있습니다.
// 모든 문제가 그렇듯 문제를 잘 읽어보면 그안에 정답이 있습니다.
// 의 성적을 취득한 학생이라는 것은
// 꼭 그 사이에 값이 존재해야 한다는 뜻이 되겠죠,
// 16번줄 if의 조건을 잘 확인해 봅니다.


int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++)
		if (650 <= scores[i] && scores[i] < 800)
			count += 1;
	return count;
}

int main() {
	int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
	int scores_len = 10;
	int ret = solution(scores, scores_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}