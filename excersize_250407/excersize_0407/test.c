#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    //int result[2]={0};
    int* result = (int*)malloc(2 * sizeof(int));
    int i = 0;
    int j = 0;
    for (i = 0;i < numsSize;i++) {
        for (j = 0;j < numsSize;j++) {
            if (nums[i] + nums[j] == target) {
                if (i == j){
                    continue;
                }
                else {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }               

            }

        }
    }
    *returnSize = 0;
    free(result);
    return NULL;
}
int main() {
    int nums[] = { 1,2,3,4,5,6,7,8,9 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int target = 0;
    printf("��������Ҫ������3��17����");
    scanf("%d", &target);

    int* result = twoSum(nums, numsSize, target, &returnSize);
    if (result != NULL) {
        printf("�±�ֱ��ǣ�[%d %d]\n", result[0], result[1]);
        free(result);
    }
    else
        printf("��û��������ͬ���ֺ͵������������ֵ��\n");

    return 0;
}