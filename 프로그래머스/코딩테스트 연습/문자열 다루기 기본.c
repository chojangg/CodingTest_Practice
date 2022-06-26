#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    if (strlen(s) != 4 && strlen(s) != 6) {
        answer = false;
    }
    char* n = s;
    for (int i = 0; i < strlen(s); i++) {
        if (n[i] >= 'Z' && n[i] >= 'a') {
            answer = false;
        }
    }

    return answer;
}