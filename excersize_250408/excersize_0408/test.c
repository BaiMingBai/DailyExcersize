#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include "huiwen_f.h"

int main() {
	printf("%d\n", 0 % 10);
	int num = 0;
	printf("���������֣�");
	scanf("%d", &num);
	if (IsHui(num))
		printf("�ǻ���\n");
	else
		printf("���ǻ���\n");

	return 0;
}