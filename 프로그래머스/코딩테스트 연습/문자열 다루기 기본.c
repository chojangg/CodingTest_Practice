#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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