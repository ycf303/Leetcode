class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(num.empty()) return 0;

        for (int i = 1; i < nums.size(); ++i)
        {
            if(i == 1) nums[i] = max(nums[i-1], nums[i]);
            nums[i] = max(nums[i-1], nums[i-2] + nums[i]);
        }
        
        return nums[nums.size()-1];
    }
};