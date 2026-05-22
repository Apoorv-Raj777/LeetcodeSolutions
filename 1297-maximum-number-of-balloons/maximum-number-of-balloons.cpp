class Solution {
public:

    int func(unordered_map<char,int> &need, unordered_map<char,int> &have){
        int res = INT_MAX;
        for(auto i : need){
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];

            if(fhave<fneed){
                return 0;
            }
            int times = fhave/fneed;
            res = min(res,times);
        }
        return res;
    }

    int maxNumberOfBalloons(string text) {
        int n = text.length();
        string b = "balloon";
        int m = b.length();
        unordered_map<char,int> need;
        unordered_map<char,int> have;
        int i;
        for(i=0; i<n ;i++){
            have[text[i]]++;
        }
        for(i=0; i<m ;i++){
            need[b[i]]++;
        }

        return func(need,have);
    }
};