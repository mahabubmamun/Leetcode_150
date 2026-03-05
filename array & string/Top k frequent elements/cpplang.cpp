class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++)
        {
            mp[nums[i]]++;
        }

        priority_queue<pair<int,int>>pq;
        for(auto &p: mp)
        {
            pq.push({p.second, p.first});
        }

        vector<int>v;
        for(int i=0;i<k;i++)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
