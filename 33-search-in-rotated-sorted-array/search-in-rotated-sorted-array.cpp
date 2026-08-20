class Solution {
public:
    int search(vector<int>& a, int target) {
        int n = a.size();
        int low = 0;
        int high = n - 1;
        while(low<=high){
            int guess = low + (high-low)/2;

            if(a[guess] == target){
                return guess;
            }

            if(a[guess]>a[n-1]){  //part 1
                if(a[guess]<target) //right jana hai
                   low = guess+1;

                else{
                    if(a[0]>target) //right jana hai
                       low = guess+1;
                    else            //left jana hai
                       high = guess-1;
                }
            }
            else{
            //part2
            if(a[guess]>target) // right jana hai
               high = guess-1;
            else{
                if(a[n-1]<target)  // right jana hai
                   high = guess -1;

                else            // left jana hai
                   low = guess+1;
            }
          }
        }
        return -1;
    }
};