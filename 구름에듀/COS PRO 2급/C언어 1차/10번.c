#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ģ���� ���� ������ 1�������� �־����ϴ�.
// COS PRO 
// �ؼ��� �ʿ���� ��ũ�� �߰� ã�� �ʿ����
// �����Ӱ� �ڵ��� ������ �κ��Դϴ�.
// �������� �ڵ��Ͻø�˴ϴ�.
// ���� int answer = 0; ���� //���⿡ �ڵ带 �ۼ����ּ���
// ��� ǥ�õǾ� �ִ� ���� ���� int answer = 0 �� �״�� �־� �ϴ� ������ �Ͻʴϴ�.
// solution �Լ��� �����Ӱ� �ƹ����̳� �ۼ��ص� �������ϴ�.
// �߰������� ���� include �� �߰��ϼŵ� �˴ϴ�.

int solution(int price, char* grade) {
	int answer = 0;
	if (grade == "V") {
		answer = price * 0.85;
	}
	else if (grade == "S") {
		answer = price * 0.95;
	}
	return answer;
}

int main() {
	int price1 = 2500;
	char* grade1 = "V";
	int ret1 = solution(price1, grade1);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	int price2 = 96900;
	char* grade2 = "S";
	int ret2 = solution(price2, grade2);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}
