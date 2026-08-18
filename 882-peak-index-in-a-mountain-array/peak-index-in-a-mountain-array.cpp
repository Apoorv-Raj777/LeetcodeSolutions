class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n = a.size();
        int low = 0;
        int high = n-1;
        int res  = -1;
        while(low<=high){
            int guess = low + (high-low)/2;

            if(a[guess]<a[guess+1]){  //chadhan
                low = guess+1;
            }
            else{   // first occurence of peak + dhalan
                res = guess;
                high = guess-1;
            }
        }
        return res;
    }
};