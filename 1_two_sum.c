/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i;
    int i_2;
    
    int *to_return;
    to_return = malloc(sizeof(int) * 2);
    i = 0;
    while (i <= numsSize - 1)
    {
        i_2 = i + 1;
        while (i_2 <= numsSize - 1)
        {
            if(nums[i] + nums[i_2] == target)
            {
                to_return[0] = i;
                to_return[1] = i_2;
                *returnSize = 2;
                return (to_return);
            }
            i_2++;
        }
        i++;
    }
    *returnSize = 0;
    return (NULL);
}
