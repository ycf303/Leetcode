/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return rec(0, nums.size()-1, nums);
    }

    TreeNode* rec(int begin,int end,vector<int>& nums)
    {
    	if(end < begin) return NULL;
    
    	int mid = (begin + end)/2;

    	TreeNode *node = new TreeNode(nums[mid]);

	    node->left = rec(begin, mid-1, nums);
  	
	    node->right = rec(mid+1, end, nums);
	    	
	    return node;
    }
};