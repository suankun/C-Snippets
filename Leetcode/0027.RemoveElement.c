// 27. Remove Element
// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
// The relative order of the elements may be changed.

// Since it is impossible to change the length of the array in some languages, you must instead
// have the result be placed in the first part of the array nums. More formally, if there are k elements
// after removing the duplicates, then the first k elements of nums should hold the final result.
// It does not matter what you leave beyond the first k elements.

// Return k after placing the final result in the first k slots of nums.

// Do not allocate extra space for another array. You must do this by modifying the input array
// in-place with O(1) extra memory.

#include <stdio.h>

#define SIZE 6

int removeElement(int* nums, int numsSize, int val){
    int size = numsSize;
    for (size_t i = 0; i < size; i++)
    {
        if (nums[i] == val)
        {
            for (size_t j = 0; j < size-1; j++)
            {
                nums[i] = nums[i+1];
            }
            size--;
        }
    }
    return *nums;
}

int main() {
    int arr[SIZE] = {1, 2, 3, 1, 2, 3};
    int val = 2;

    removeElement(arr, SIZE, val);
    
    return 0;
}
