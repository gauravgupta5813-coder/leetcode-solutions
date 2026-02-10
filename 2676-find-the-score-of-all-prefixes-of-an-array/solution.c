long long* findPrefixScore(int* nums, int numsSize, int* returnSize) {

    long long* res = (long long*)malloc(numsSize * sizeof(long long));

    long long maxVal = nums[0];
    long long prefix = 0;

    for(int i = 0; i < numsSize; i++) {

        if(nums[i] > maxVal)
            maxVal = nums[i];

        long long conversion = nums[i] + maxVal;

        prefix += conversion;

        res[i] = prefix;
    }
    *returnSize = numsSize;
    return res;
}

