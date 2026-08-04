class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int start = nums[0];
        int end = nums[n-1];
        unordered_map<int,int>f;
        vector<int> res;
        for(int i = 0; i<n;i++){
            f[nums[i]]++;
        }
        for(int i = start; i<=end; i++){
            if(f.find(i)==f.end()){
                res.push_back(i);
            }
        }
           
        return res;
    }
};