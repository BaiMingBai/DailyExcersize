#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//bool IsHui(int num) {
//	int rv = 0;
//	int or = num;
//	if (or>=0) {
//		while ((or / 10) != 0) {
//			rv = rv * 10 + or % 10;
//			or = or / 10;
//		}
//		rv = rv * 10 + or ;
//		if (rv == num)
//			return 1;
//		else
//			return 0;
//	}
//	else
//		return 0;
//}

bool IsHui(int num) {
	if (num < 0 || (num%10==0&&num>0))
		return 0;
	int left = num;
	int right = 0;
	while (right < left) {
		right = right*10 + left % 10;
		left = left / 10;
	}
	return(right == left || right / 10 == left);
}
