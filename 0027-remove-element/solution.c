int removeElement(int* nums, int numsSize, int val) {
    int i,j;
    int k = 0;

    for(i=0; i<numsSize; i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
} 
