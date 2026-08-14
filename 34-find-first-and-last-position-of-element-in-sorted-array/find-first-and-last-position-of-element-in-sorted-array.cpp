class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        int low =0;
        int high = a.size()-1;
        int first = -1;
        int last =-1;

        // first;
        while(low<= high){
            int mid = low + (high-low)/2;
            if(a[mid]==target){   // finding first in left search space
               first  = mid;
               high = mid-1;
            }

            else if(a[mid]<target)
               low = mid+1;
            
            else
               high = mid -1;
        }
        //last
        low =0;
        high = a.size()-1;
        while(low<= high){
            int mid = low + (high-low)/2;
            if(a[mid]==target){   // finding last in right search space
               last  = mid;
               low = mid+1;
            }
            else if(a[mid]<target)
               low = mid+1;
            
            else
               high = mid -1;
        }
        return {first, last};
    }
};