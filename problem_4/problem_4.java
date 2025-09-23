class Solution {
    public int removeDuplicates(int[] nums) {
        int size = nums.length;
        if(size<=2)
        {
            return size;
        }
        int k = 2;
        for(int i=0;i<size;i++)
        {
            if(nums[i] != nums[k-2])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
}
