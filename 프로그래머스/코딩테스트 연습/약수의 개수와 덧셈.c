#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; i++) {
        int cnt = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) cnt++;
        }

        if (cnt % 2 == 0) answer += i;
        else answer -= i;
    }

    return answer;
}

// ¸ÞÀÎ
int main(void) {
    int left, right;
    scanf("%d %d", &left, &right);

    printf("%d\n", solution(left, right));

    return 0;
}