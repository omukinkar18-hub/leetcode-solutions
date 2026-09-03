#include <stdbool.h>
#include <limits.h>

#define TRUE true
#define FALSE false

bool uniformArray(int* nums1, int nums1Size) {
    int even=0,odd=INT_MAX,odd_count=0;
    if(nums1Size==1)
        return TRUE;
    for(int i=0;i<nums1Size;i++)
    {
        if(nums1[i]%2!=0)
        {
            even=1;
            break;
        }
    }
    if(even==0)
        return TRUE;
    
    for(int i=0;i<nums1Size;i++)
        if(nums1[i]%2!=0)
        {   
            odd_count+=1;
            if(odd>nums1[i])
                odd=nums1[i];
        }

    for(int i=0;i<nums1Size;i++)
    {
        if(nums1[i]%2==0)
            if(nums1[i]-odd<1)
                return FALSE;
    }
    return TRUE;
}
