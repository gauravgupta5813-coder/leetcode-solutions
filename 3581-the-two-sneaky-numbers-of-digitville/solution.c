/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        int count = 0;

        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count == 2) {
            int alreadyAdded = 0;
            for (int x = 0; x < k; x++) {
                if (result[x] == nums[i]) {
                    alreadyAdded = 1;
                    break;
                }
            }
            if (!alreadyAdded) {
                result[k++] = nums[i];
            }
        }
    }

    *returnSize = k;
    return result;
}

