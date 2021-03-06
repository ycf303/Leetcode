class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        for (int i = 1; i < nums.size(); ++i)
        {
            if(nums[i-1] < i) return false;

            nums[i] = max(nums[i-1],i+nums[i]);
        }

        return true;
    }
};