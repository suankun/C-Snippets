// 26. Remove Duplicates from Sorted Array
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place
// such that each unique element appears only once. The relative order of the elements should
// be kept the same.

// Since it is impossible to change the length of the array in some languages, you must instead
// have the result be placed in the first part of the array nums. More formally, if there are k
// elements after removing the duplicates, then the first k elements of nums should hold the
// final result. It does not matter what you leave beyond the first k elements.

// Return k after placing the final result in the first k slots of nums.

// Do not allocate extra space for another array. You must do this by modifying the input array
// in-place with O(1) extra memory.

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0 || numsSize == 1)
        return numsSize;
 
    int temp[numsSize];
 
    // Start traversing elements
    int j = 0;
    // If current element is not equal to next element
    // then store that current element
    for (int i = 0; i < numsSize - 1; i++)
        if (nums[i] != nums[i + 1])
            temp[j++] = nums[i];
 
    // Store the last element as whether it is unique or
    // repeated, it hasn't stored previously
    temp[j++] = nums[numsSize - 1];
 
    // Modify original array
    for (int i = 0; i < j; i++)
        nums[i] = temp[i];
 
    return j;
}
