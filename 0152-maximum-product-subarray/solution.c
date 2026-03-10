#include <limits.h>

int maxProduct(int* nums, int numsSize) {

    int max = nums[0];
    int min = nums[0];
    int ans = nums[0];

    for(int i = 1; i < numsSize; i++) {

        int a = nums[i];
        int b = max * nums[i];
        int c = min * nums[i];

        if(a >= b && a >= c)
            max = a;
        else if(b >= a && b >= c)
            max = b;
        else
            max = c;

    
        if(a <= b && a <= c)
            min = a;
        else if(b <= a && b <= c)
            min = b;
        else
            min = c;

        if(max > ans)
            ans = max;
    }

    return ans;
}
