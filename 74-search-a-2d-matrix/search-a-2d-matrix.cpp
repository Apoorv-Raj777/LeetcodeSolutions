class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int n = a.size();
        int m = a[0].size();
        int low =0; int high = n*m-1;
        int row,col;
        while(low <=high){
            int index = low + (high-low)/2;
            row = index/m;
            col = index%m;
            if(a[row][col]==target) return true;
            else if(a[row][col]<target) low = index+1;
            else high = index-1;
        }
        return false;

    }
};