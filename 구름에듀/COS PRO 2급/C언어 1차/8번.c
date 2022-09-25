#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 한 줄 수정하기
// 보통은 다른곳이 아닌 solution 함수내의 한 줄을 수정합니다.
// 한 줄 수정의 유형은 기호수정하기, 값수정하기, 한줄 전체가 수정되기 등으로
// 수정되는 곳이 이 될 수도 있습니다.
// 모든 문제가 그렇듯 문제를 잘 읽어보면 그안에 정답이 있습니다.
// 평균을 구한 뒤 평균보다 작은 값의 개수를 구하는 문제입니다.
// 개수가 잘 안나온것이 해봅니다.
// 19번줄 평균을 확인해봅시다.

int solution(int data[], int data_len) {
    double total = 0;
    for (int i = 0; i < data_len; i++)
        total += data[i];
    int cnt = 0;
    double average = total / data_len;
    for (int i = 0; i < data_len; i++)
        if (data[i] <= average)
            cnt += 1;
    return cnt;
}

int main() {
    int data1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int data_len1 = 10;
    int ret1 = solution(data1, data_len1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int data2[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 10 };
    int data_len2 = 10;
    int ret2 = solution(data2, data_len2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}