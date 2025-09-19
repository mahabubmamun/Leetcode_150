class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp = 1;
        int res = nums[0];
        int size = nums.size();
        for(int i=0;i<size-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                temp++;
            }
            else
            {
                if(temp > size/2)
                {
                    return nums[i];
                    break;
                }
                temp = 1;
            }
        }
        if(temp > size/2)
        {
            return nums[size-1];
        }
        return res;


        // solution 2
        // using sorting
        // sort(nums.begin(), nums.end());
        // int len = nums.size();
        // int res = nums[len/2];
        // return res;


        // solution 3
        // using Moore Voting Algorithm
        // int count = 0;
        // int candidate = 0;
        // for(int num : nums)
        // {
        //     if(count == 0)
        //     {
        //         candidate = num;
        //     }
        //     if(num == candidate)
        //     {
        //         count++;
        //     }
        //     else
        //     {
        //         count--;
        //     }
        // }
        // return candidate;

    }
};
