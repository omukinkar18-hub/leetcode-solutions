void insertionsort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0&&arr[j]>temp;)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

void sortColors(int* nums, int numsSize) {
    insertionsort(nums,numsSize);
}
