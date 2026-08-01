class Solution {
public:
    int maxDiff(vector<int>& nums, vector<vector<int>> & dp, int i, int j){
        if(i==j) return nums[i];

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int pickLeft= nums[i] - maxDiff(nums,dp,i+1,j);

        int pickRight= nums[j] - maxDiff(nums,dp,i,j-1); //nums[j] not nums[i] because you are picking the right element

        return dp[i][j] = max(pickLeft,pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        if(n%2==0 || n==1) return true;

        vector<vector<int>>dp(n,vector<int>(n,-1));

        return maxDiff(nums, dp, 0, n-1) >=0;
    }
};