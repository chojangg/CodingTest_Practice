#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 한 줄 수정하기
// 보통은 다른곳이 아닌 solution 함수내의 한 줄을 수정합니다.
// 한 줄 수정의 유형은 , 값수정하기, 한줄 전체가 수정되기 등으로
// 수정되는 곳이 같은 줄에서 2곳 이상이 될 수도 있습니다.
// 모든 문제가 그렇듯 문제를 잘 읽어보면 그안에 정답이 있습니다.
// 로 이루어져 있다고 하니
// 공백도 마침표도 둘다 동시에 아닐때 나머지 값을 저장해야겠지요
// 19번줄 if의 조건을 잘 확인해 봅니다.

bool solution(char* sentence) {
    char* str = (char*)malloc(sizeof(char) * 103);
    int len = 0;
    for (int i = 0; i < strlen(sentence); i++) {
        char ch = sentence[i];
        if (ch != ' ' && ch != '.') str[len++] = ch;
    }
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) return false;
    }
    return true;
}

int main() {
    char sentence1[19] = "never odd or even.";
    bool ret1 = solution(sentence1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 == true ? "true" : "false");

    char sentence2[19] = "palindrome";
    bool ret2 = solution(sentence2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 == true ? "true" : "false");
}
