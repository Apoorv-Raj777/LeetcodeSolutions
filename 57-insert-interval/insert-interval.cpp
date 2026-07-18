class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& res){
        vector<vector<int>>newRes;
        int start1 = res[0][0];
        int end1 = res[0][1];
        for(int i =1; i<res.size(); i++){
            int start2 = res[i][0];
            int end2 = res[i][1];
            if(end1>=start2){
                start1 = start1;
                end1 = max(end1,end2);
                continue;
            }
            newRes.push_back({start1,end1});
            start1 = start2;
            end1 = end2;
        }
        newRes.push_back({start1,end1});
        return newRes;
    }

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        bool insert = false;
        int n = intervals.size();
        vector<vector<int>>res;
        for(int i=0; i<n;i++){
            int start1 = intervals[i][0];
            int start2 = newInterval[0];
            if(start1>=start2 && insert == false){  // yahan pe dhyan dena
                res.push_back(newInterval);
                insert = true;
            }
            res.push_back(intervals[i]);
        }
        if(insert==false){
            res.push_back(newInterval);
        }
        return merge(res);
    }
};