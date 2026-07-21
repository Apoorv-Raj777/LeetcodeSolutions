class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>>res;
        int n = A.size();
        int m = B.size();

        int i =0;
        int j =0;
        while(i<n && j<m){
            int start1 = A[i][0];
            int end1 = A[i][1];

            int start2 = B[j][0];
            int end2 = B[j][1];

            if(start1<=start2){
                if(end1>=start2){
                    int s = max(start1,start2);
                    int e = min(end1,end2);
                    res.push_back({s,e});
                }
            }
            else{
                if(end2>=start1){
                    int s = max(start1,start2);
                    int e = min(end1,end2);
                    res.push_back({s,e});
            }


          }
            if(end1<=end2) i++;
            else j++;
        }
        return res;

    }
};