/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int * result =  (int*)malloc((nums1Size < nums2Size ? nums1Size : nums2Size) * sizeof(int));
    *returnSize = 0;

    int visited[1001] = {0};
    for(int i=0; i<nums1Size; i++){
        visited[nums1[i]]=1;
    }

    for(int i = 0; i < nums2Size; i++){
        if(visited[nums2[i]] == 1){
            result[(*returnSize)++] = nums2[i];
            visited[nums2[i]] = 0;
        }
    }

    return result;
}
