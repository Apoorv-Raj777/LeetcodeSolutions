class Solution {
public:
    bool presentOrNot(unordered_map<char,int> &need,unordered_map<char,int> &have){
        for(auto i : have){
            char c = i.first;
            int haveFreq = i.second;
            int needFreq = need[c];
            if(needFreq<haveFreq){
                return false;
            }
        }
        return true;
    }
    
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        unordered_map<char,int> have;
        for(int i =0; i<t.length();i++){
            have[t[i]]++;
        }
        int high=0, low=0, mini=INT_MAX;
        string ans ="";
        int start = -1;
        for(high =0; high<s.length();high++){
            need[s[high]]++;
            while(presentOrNot(need,have)){
                int len = high-low+1;
                if(len<mini){
                    mini=len;
                    start = low;
                }
                need[s[low]]--;
                if(need[s[low]]==0) need.erase(s[low]);
                low++;
            }
        }
        if(start ==-1) return "";
        return s.substr(start,mini);

    }
};