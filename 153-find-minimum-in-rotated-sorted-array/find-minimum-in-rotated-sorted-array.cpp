class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a.size();
        if(n==1) return a[0];
        int low  = 0;
        int high  = n-1;
        int res =-1;
        while(low<=high){
            int guess = low + (high-low)/2;
            if(a[guess]>a[n-1]){
            low = guess+1;
            }
            else{
                res = a[guess];
                high = guess-1;
            }
        }
        return res;
    }
};