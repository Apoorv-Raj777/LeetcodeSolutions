class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int n = s.length();
        unordered_map<char,int>need;
        unordered_map<char,int>have;
        for(int i =0; i<n; i++){
            need[s[i]]++;
        }

        for(int i =0; i<n; i++){
            have[t[i]]++;
        }
        for(auto i : need){
            char c = i.first;
            int freqNeed = i.second;
            int freqHave = have[c];
            if(freqNeed != freqHave) return false;
        }
        return true;

    }
};