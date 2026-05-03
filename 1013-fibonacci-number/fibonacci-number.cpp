class Solution {
public:
    int solve(int n, vector<int>&dp){
        if(n<=1)
          return n;
        
        if(dp[n] != -1){
            return dp[n];
        }

        return dp[n] = solve(n-1, dp) + solve(n-2, dp); // solve karna lekin use store bhi kar dena dp[n] mein
    }

    int fib(int n) {
        if (n<=1) // Base case:- Lowest possible valid value of the param  
           return n;

        vector<int>dp(n+1, -1); //n+1 size ka lenge kyunki dp[n] store karna hua to? and sabko -1 se initialize kar denge
        
        return solve(n, dp);
    }
};