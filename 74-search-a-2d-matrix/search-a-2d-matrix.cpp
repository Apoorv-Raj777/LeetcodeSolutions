class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int x) {
        int n = a.size();
        int m = a[0].size();
        int low = 0, high = (n*m) -1;
        while(low<=high){
            int guess = low + (high -low)/2;
            int row = guess/m;
            int col  = guess%m;// m hoga col size(i.e. number of columns)
            if(a[row][col]==x)
               return true;
            else if(a[row][col]<x)
                low = guess+1;
            else
                high = guess -1;
        }
        return false;
    }
};