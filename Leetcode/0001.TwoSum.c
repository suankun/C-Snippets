#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 * https://leetcode.com/problems/two-sum/
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;

    int *returnSz = malloc(2 * (sizeof(int)));
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
            {
            if (nums[i]+nums[j]==target)
                {
                    returnSz[0]=i;
                    returnSz[1]=j;
                }
        }
    }

    return returnSz;
}
