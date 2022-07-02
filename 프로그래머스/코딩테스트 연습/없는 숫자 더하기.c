#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int num[9];
    for (int i = 0; i < 9; i++) {
        num[i] = i + 1;
    }
    for (int i = 0; i < numbers_len; i++) {
        for (int j = 0; j < 9; j++) {
            if (num[j] == numbers[i]) {
                num[j] = 0;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        answer += num[i];
    }

    return answer;
}