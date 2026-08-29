#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int ind1,ind2=0;
    for(int i=0;i<numsSize;i++)
    {
        ind1=i;
        int j=i;
        while(j<numsSize)
        {
            if(i!=j)
            if(nums[i]+nums[j]==target)
            {
                ind2=j;
                break;
            }
            j++;
        }
        if(ind2!=0)
            break;
    }
  int* result = (int*)malloc(2 * sizeof(int));
    
    // 2. Store your found indexes in this new array
    result[0] = ind1;
    result[1] = ind2;
    
    // 3. Tell the system the size of your returned array is 2
    *returnSize = 2;
    
    // 4. Return the array
    return result;
}
