#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number) {
    int count = 0;
    while (number > 0) {
        int n = number % 10;
        if (n == 2 || n == 3 || n == 5 || n == 7)
            count += 1;
        number /= 10;
    }
    return count;
}

int main() {
    int number = 29022531;
    int ret = solution(number);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}