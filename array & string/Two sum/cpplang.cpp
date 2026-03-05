class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        // approach 1, time complexity O(n^2)
        // for(int i=0;i<size-1;i++)
        // {
        //     for(int j=i+1;j<size;j++)
        //     {
        //         if((nums[i]+nums[j]) == target)
        //         {
        //             return {i,j};
        //         }
        //     }
        // }

        // approach 2 , time complexity O(n)
        unordered_map<int, int> um;
        for(int i=0;i<size;i++)
        {
            um[nums[i]] = i;
        }
        for(int i=0;i<size;i++)
        {
            int complement = target - nums[i];
            if(um.find(complement) != um.end() && um[complement] != i)
            {
                return {i, um[complement]};
            }
        }

        return {};
    }
};
