#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include "huiwen_f.h"

int main() {
	printf("%d\n", 0 % 10);
	int num = 0;
	printf("请输入数字：");
	scanf("%d", &num);
	if (IsHui(num))
		printf("是回数\n");
	else
		printf("不是回数\n");

	return 0;
}