class Solution {
public:
    int maxDiff(vector<int>& piles,vector<vector<int>>&dp,int left, int right){
        if(left==right){
            return true;
        }
        if(dp[left][right]!=-1){
            return true;
        }
        int leftChoice = piles[left]- maxDiff(piles,dp,left+1,right);
        int rightChoice = piles[right] - maxDiff(piles,dp,left,right-1);

        return max(leftChoice,rightChoice);
    }
    bool stoneGame(vector<int>& piles) {
        int n =  piles.size();
        if(n%2==0|| n==1) return true;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return maxDiff(piles,dp,0,n-1)>=0;
        
    }
};