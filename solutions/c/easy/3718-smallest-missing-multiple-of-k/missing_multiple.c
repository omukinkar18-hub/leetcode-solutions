int missingMultiple(int* nums, int numsSize, int k) {
    int mul=0;
    for(int i=1;i<1000;i++)
    {
        int fnd=0;
        mul=i*k;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]==mul)
            {
                fnd=1;
                break;
            }    
        }
        if(fnd==0)
            break;
    }
    return mul;
}
