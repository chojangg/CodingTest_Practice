#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int floors[], int floors_len) {
    int dist = 0;
    for (int i = 1; i < floors_len; ++i) {
        if (floors[i] > floors[i - 1])
            dist += floors[i] - floors[i - 1];
        else
            dist += floors[i - 1] - floors[i];
    }
    return dist;
}

int main() {
    int floors[5] = { 1, 2, 5, 4, 2 };
    int floors_len = 5;
    int ret = solution(floors, floors_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}