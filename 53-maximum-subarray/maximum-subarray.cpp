class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int bestend = a[0];
        int res = a[0];

        for(int i = 1; i<a.size();i++){
            int v1 = a[i];
            int v2 = bestend + a[i];
            
            bestend = max(v1,v2);
            res = max(res,bestend);
        }

        return res;
    }
};