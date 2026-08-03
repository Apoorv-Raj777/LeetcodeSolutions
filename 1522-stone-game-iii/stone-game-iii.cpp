class Solution {
public:

    int maxDiff(vector<int>& stoneValue, vector<int>& dp, int i) {

        // Base case
        if (i >= stoneValue.size())
            return 0;

        // Already computed
        if (dp[i] != INT_MIN)
            return dp[i];

        int sum = 0;
        int ans = INT_MIN;

        // Take 1, 2 or 3 stones
        for (int k = 0; k < 3 && i + k < stoneValue.size(); k++) {

            sum += stoneValue[i + k];

            ans = max(ans, sum - maxDiff(stoneValue, dp, i + k + 1));
        }

        return dp[i] = ans;
    }

    string stoneGameIII(vector<int>& stoneValue) {

        int n = stoneValue.size();

        vector<int> dp(n, INT_MIN);

        int diff = maxDiff(stoneValue, dp, 0);

        if (diff > 0)
            return "Alice";

        if (diff < 0)
            return "Bob";

        return "Tie";
    }
};