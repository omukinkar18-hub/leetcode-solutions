int maxArea(int* height, int heightSize) {
    int i=0,j=heightSize-1,vol=0;
    int dem=0;
    while(i<j)
    {   dem=0;
        if(height[i]>height[j])
        {
            dem=height[j]*(j-i);
            j--;
        }
        else
        {
            dem=height[i]*(j-i);
            i++;
        }
        if(vol<dem)
            vol=dem;        
    }
    return vol;
}
