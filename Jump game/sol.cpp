class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int val = 0;
        for(int i=0;i<size;i++)
        {
            if(i > val)
            {
                return false;
            }
            val = max(val, i+nums[i]);
        }
        return true;
    }
};
