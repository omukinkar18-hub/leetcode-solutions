int firstStableIndex(int* nums, int numsSize, int k) {
    int max[numsSize],min[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        max[i]=nums[i];
        for(int j=0;j<=i;j++)
            if(max[i]<nums[j])
                max[i]=nums[j];
    }

    for(int i=0;i<numsSize;i++)
    {
        min[i]=nums[i];
        for(int j=i;j<numsSize;j++)
            if(min[i]>nums[j])
                min[i]=nums[j];
    }
    for(int i=0;i<numsSize;i++)
        if(max[i]-min[i]<=k)
            return i;

    return -1;
}
