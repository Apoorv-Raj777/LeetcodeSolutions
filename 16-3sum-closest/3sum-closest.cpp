class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end()); 

        int n = nums.size();
        int max_diff = INT_MAX;
        int res_sum = 0;

        for(int i = 0;i<n-2;i++){
            int left=i+1;
            int right = n-1;

            while(left<right){
                int sum = nums[i]+ nums[left] +nums[right];
                int d =abs(target-sum);

                if(d<max_diff){
                    max_diff =d;
                    res_sum = sum;
                }
                if(sum == target){
                    return res_sum;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return res_sum;
    }
};