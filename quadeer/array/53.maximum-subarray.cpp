/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;

        for(auto i:nums){
            sum = sum + i;
            maxi = max(sum,maxi);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};
// @lc code=end

