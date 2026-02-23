class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> set_nums(nums.begin(), nums.end());
        vector<int> ret;
        for(int i = 1; i<=nums.size();i++){
            if(set_nums.find(i)==set_nums.end())
               ret.push_back(i);
        }
        return ret;
    }
};