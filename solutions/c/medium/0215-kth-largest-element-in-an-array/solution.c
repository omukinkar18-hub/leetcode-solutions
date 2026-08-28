#include <stdlib.h>

static int compareInts(const void *a, const void *b) {
    int valA = *(const int *)a;
    int valB = *(const int *)b;

    return (valA > valB) - (valA < valB);
}

int findKthLargest(int *nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(*nums), compareInts);

    return nums[numsSize - k];
}
