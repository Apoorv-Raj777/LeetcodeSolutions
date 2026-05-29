class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i =0, j =0;
        int n = t.length();
        int m = s.length();
        while(i<m && j<n){
            if(s[i]==t[j]){
                i++;
                // j++; yahan pe ye nahi hoga kyunki do baar increment ho ja raha hai
            }
            j++;
        }
        if(i<m){
            return false;
        }
        return true;
    }
};