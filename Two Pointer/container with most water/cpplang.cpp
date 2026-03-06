class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int mx = 0;
        int i=0, j=size-1;

        while(i<j)
        {
            int temp = (j-i)*min(height[i],height[j]);
            mx = max(temp,mx);
            if(height[i] <= height[j])
            {
                i++;
            }
            else if(height[i] >= height[j])
            {
                j--;
            }
        }
        return mx;
    }
};
