#include <limits.h>

int firstStableIndex(int* nums, int numsSize, int k) {
    if (numsSize == 0) 
    {
        return -1;
    }

    int min[numsSize];
    min[numsSize - 1] = nums[numsSize - 1];

    for (int i = numsSize - 2; i >= 0; i--) 
    {
        if (nums[i] < min[i + 1]) 
        {
            min[i] = nums[i];
        } else 
        {
            min[i] = min[i + 1];
        }
    }

    int maxi = nums[0];
    for (int i = 0; i < numsSize; i++) 
    {
        if (nums[i] > maxi) 
        {
            maxi = nums[i];
        }

        if (maxi - min[i] <= k) 
        {
            return i;
        }
    }

    return -1;
}
