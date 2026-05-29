class Solution {
public:

    int findMax(vector<int> &f){
        int maxC = -1;
        for(int i = 0; i<f.size(); i++){
            maxC = max(maxC, f[i]);
        }
        return maxC;
    }

    int characterReplacement(string s, int k) {
        vector<int> f(256,0);
        int low = 0;
        int high = 0;
        int n = s.length();
        int res = INT_MIN;
        for(high = 0;high<n; high++){
            f[s[high]]++;
            int len = high -low+1;
            int maxChar = findMax(f);
            int diff = len - maxChar;

            while(diff>k){
                f[s[low]]--;
                low++;

                len = high - low+1;
                maxChar = findMax(f);
                diff = len - maxChar;
            }

            len = high - low+1;
            res = max(res,len);
        }
        return res;
    }
};