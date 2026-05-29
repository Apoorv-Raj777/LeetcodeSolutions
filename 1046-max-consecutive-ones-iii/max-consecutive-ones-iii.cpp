class Solution {
public:


    int longestOnes(vector<int>& nums, int k) {
        int low =0, high = 0, res = INT_MIN, n =nums.size();
        int zeros = 0;
        int len;
        for(high = 0; high <n; high++){
          if(nums[high]==0){
            zeros++;
          }
          while(zeros>k){
            if(nums[low]==0){
                zeros--;
            }
            low++;
          }
            len = high - low +1;
            res = max(res,len);
        }
        
        return res;
    }
};