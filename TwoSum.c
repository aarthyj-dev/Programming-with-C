//LeetCode Problem no:1

#include<stdio.h>
#include<stlib.h>

//solution---
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i,j,flag=0;
    int *res = (int*)malloc(2 * sizeof(int));
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j] == target)
            {
                res[0]=i;
                res[1]=j;
                break;
            }
        }
    }
    *returnSize=2;
    return res;      
}
//----
int main() 
{
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int returnSize1;
    int* result = twoSum(nums1, sizeof(nums1) / sizeof(nums1[0]), target1, &returnSize1);
    
    if (result1 != NULL && returnSize1 == 2) 
    {
        printf("Indices are %d and %d\n", result[0], result[1]);
        free(result1);
    } 
    else 
    {
        printf("No solution found or memory error.\n");
    }
}
