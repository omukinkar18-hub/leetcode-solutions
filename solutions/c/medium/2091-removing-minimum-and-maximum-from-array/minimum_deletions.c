int minimumDeletions(int* nums, int numsSize) {
    int min=nums[0],mini=0,maxi=0,max=nums[0];
    if(numsSize==1)
        return 1;
    else if(numsSize==2)
        return 2;
    else if(numsSize==3)
        return 2;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
        {
            max=nums[i];
            maxi=i;
        }
        if(nums[i]<min)
        {
            min=nums[i];
            mini=i;
        }
    }
    
    int del=0;
    int left;
    int right;
    
    if(mini < maxi)
    {
        left = mini;
        right = maxi;
    }
    else
    {
        left = maxi;
        right = mini;
    }
    
    int costFront = right + 1;
    int costBack = numsSize - left;
    int costBoth = left + 1 + numsSize - right;
    
    if(costFront <= costBack && costFront <= costBoth)
    {
        if(maxi > mini)
            del += maxi + 1;
        else
            del += mini + 1;
        return del;
    }
    
    if(costBack <= costFront && costBack <= costBoth)
    {
        if(maxi < mini)
            del += numsSize - maxi;
        else
            del += numsSize - mini;
        return del;
    }
    
    if(mini < maxi)
    {
        del += mini + 1;
        del += numsSize - maxi;
    }
    else
    {
        del += maxi + 1;
        del += numsSize - mini;
    }

    return del;
}
