class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n =  nums.size();
        int res = INT_MAX;
        int sum =0;
        int low =0;
        for(int high = 0; high<n;high++){
            sum = sum + nums[high]; // high ko humesha information mein include karna..info is sum
            while(sum>=target){
                int len = high - low+1;
                res = min(res, len);
                sum = sum-nums[low];
                low++;
            }
            
        }
        if (res==INT_MAX) return 0;
        return res;

    }
};