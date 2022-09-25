#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 친절한 문제 설명은 1차까지만 주어집니다.
// COS PRO 빈칸채우기의 
// 위에서 미리 만들어지는 func_a, func_b, func_c 3가지가 만들어집니다.
// 각각의 함수에서 전달받는 매개변수는 무엇인지, 어떠한 역할을 하고 있는지 리턴값이 어떤타입인지를 확인하셔야 합니다.
// 만들어진 3가지를 solution 함수에서 어떻게 사용되는지 곰곰히 생각해서 넣습니다.
// 어떠한 값을 매개변수로 전달 받아서 어떤식으로 사용 되는지
// 문제에서 말하고자 하는 부분이 빈칸에서 어떤 부분인지를 파악하셔야 합니다.
// 는 잘 살펴보시면 배열변수의 모든 값을 0으로 초기화를 한 후
// 배열순서를 지정한 대괄호[] 안에 변수의 값을 넣어 ++로 증가시켰습니다.
// 배열의 인덱스를 값으로 사용하는 방법인데 보통 를 구할때 자주 사용하는 방법입니다.
// 는 해석이 쉽지요 전달받은 배열에서 을 찾는 함수입니다.
// 는 전달받은 배열에서 을 찾는 함수가 되겠네요.
// solution의 빈칸에는 각각의 어떤 함수에 어떤 값을 전달받아 사용되는지를 작성해주시면 됩니다.

int* func_a(int arr[], int arr_len) {
    int* counter = (int*)malloc(sizeof(int) * 1001);
    for (int i = 0; i < 1001; i++)
        counter[i] = 0;
    for (int i = 0; i < arr_len; i++)
        counter[arr[i]]++;
    return counter;
}

int func_b(int arr[], int arr_len) {
    int ret = 0;
    for (int i = 0; i < arr_len; i++) {
        if (ret < arr[i])
            ret = arr[i];
    }
    return ret;
}

int func_c(int arr[], int arr_len) {
    const int INF = 1001;
    int ret = INF;
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] != 0 && ret > arr[i])
            ret = arr[i];
    }
    return ret;
}

int solution(int arr[], int arr_len) {
    int* counter = func_a(arr, arr_len);
    int max_cnt = func_b(counter, arr_len);
    int min_cnt = func_c(counter, arr_len);
    return max_cnt / min_cnt;
}

int main() {
    int arr[10] = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
    int arr_len = 10;
    int ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}