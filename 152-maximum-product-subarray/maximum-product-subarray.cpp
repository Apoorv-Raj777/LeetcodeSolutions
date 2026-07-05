class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n = a.size();
        if(n==1) return a[0];
        
        int minend = a[0];
        int maxend = a[0];
        int res = a[0];

        for(int i =1; i<n; i++){
            int v1 = a[i];
            int v2 = a[i]*minend;
            int v3 = a[i]*maxend;

            maxend = max(v1,max(v2,v3));
            minend = min(v1,min(v2,v3));

            res = max(res,max(maxend,minend));
        }
        return res;

    }
};