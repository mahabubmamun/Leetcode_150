class Solution {
    public boolean canJump(int[] nums) {
        int size = nums.length;
        int val = 0;
        for(int i=0;i<size;i++)
        {
            if(i>val)
            {
                return false;
            }
            val = Math.max(val, i+nums[i]);
        }
        return true;
    }
}
