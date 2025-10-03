bool canJump(int* nums, int numsSize) {
    int val = 0;
    int max(int a, int b)
    {
        if(a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(i > val)
        {
            return false;
        }
        val = max(val, i+nums[i]);
    }
    return true;
}
