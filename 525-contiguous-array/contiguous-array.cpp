class Solution {
public:
    int findMaxLength(vector<int>& a) {
        int zero =0;
        int one = 0;
        int res =0;
        int n = a.size();
        unordered_map<int,int>f;
        f[0] = -1;

        for(int i =0;i<n; i++){
            if(a[i]==0){
                zero++;
            }
            else{
                one++;
            }
            int diff = zero -one;
            if(diff ==0){
                res = max(res,i+1);
                continue;//Important
            }
            if(f.find(diff)==f.end()){
                f[diff] =i;
            }
            else{
                int idx = f[diff];
                int len = i - idx;
                res = max(len,res);
            }
        }
        return res;
    }
};