class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>f;
        int n = s.length();
        int i;
        for(i =0; i<n; i++){
            f[s[i]]++;
        }
        if(n<=1) return n;
        int ans =0;
        bool oddFound = false;
        for(auto i : f){
            char c = i.first;
            int freqf = i .second;
            if(freqf % 2==0){
                ans += freqf;
            }
            else{
                ans+= freqf - 1;
                oddFound = true;
            }
        }
        if (oddFound) ans+=1;
        return ans;
    }
};