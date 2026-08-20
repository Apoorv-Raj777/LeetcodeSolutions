class Solution {
public:
    int search(vector<int>& a, int target) {
        int n = a.size();
        int low = 0;
        int high = n - 1;
        int res =-1;
        while(low<=high){
            int guess = low + (high -low)/2;

            if(a[guess]>a[n-1]){
                low = guess+1;
            }
            else{
                res = guess;
                high = guess-1;
            }
        }
        if(res != -1){
            low  = 0;
            high = res-1;
            while(low<=high){
                int guess = low + (high -low)/2;

                if(a[guess]==target){
                    return guess;
                }
                else if(a[guess]>target){
                    high = guess-1;
                }
                else{
                    low = guess+1;
                }
            }

            low  = res;
            high = n-1;
            while(low<=high){
                int guess = low + (high -low)/2;

                if(a[guess]==target){
                    return guess;
                }
                else if(a[guess]>target){
                    high = guess-1;
                }
                else{
                    low = guess+1;
                }
            }
        }
        return -1;
    }
};