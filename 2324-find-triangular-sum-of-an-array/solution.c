int triangularSum(int* nums, int numsSize) {
    for (int size = numsSize; size > 1; size--) {
        for (int j = 0; j < size - 1; j++) {
            nums[j] = (nums[j] + nums[j + 1]) % 10;
        }
    }
    return nums[0];
}

