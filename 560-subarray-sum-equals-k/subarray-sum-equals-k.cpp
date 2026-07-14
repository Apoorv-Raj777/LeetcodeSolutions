class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int sum = 0;
        unordered_map<int,int>f;
        f[0] = 1;
        int res =0;
        for(int i =0; i<a.size();i++){
            sum += a[i];
            int ques = sum - k;
            int freq = f[ques];
            res += freq;

            f[sum]++;
        }
        return res;
    }
};