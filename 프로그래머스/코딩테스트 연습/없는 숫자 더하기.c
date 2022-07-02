#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
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