double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int arr[nums1Size+nums2Size];
    int i=0,j=0;int k=0;
    while(i<nums1Size && j<nums2Size)
    {
        if(nums1[i]>nums2[j])
            arr[k++]=nums2[j++];
        else
            arr[k++]=nums1[i++];
    }
    while(i<nums1Size)
        arr[k++]=nums1[i++];
    while(j<nums2Size)
        arr[k++]=nums2[j++];

    int x=nums1Size+nums2Size;
    float median=0;
    if(x%2==0)
    {
        median=(arr[x/2]+arr[x/2-1])/2.0;
    }
    else
    {
        median=arr[x/2];
    }
    return median;
}
