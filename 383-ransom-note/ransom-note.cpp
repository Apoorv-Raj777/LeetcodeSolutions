class Solution {
public:

    bool func(unordered_map<char, int>& need, unordered_map<char, int>& have){
        for(auto i : need){
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];

            if(fhave<fneed){
                return false;
            }
        }
        return true;
    }
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.length();
        int m = magazine.length();
        if(m<n) return false;
        unordered_map<char, int>need;
        unordered_map<char, int>have;
        int i;
        for(i = 0; i<n; i++)
           need[ransomNote[i]]++;

        for(i=0; i<m; i++)
            have[magazine[i]]++;

        return func(need,have);
    }
};