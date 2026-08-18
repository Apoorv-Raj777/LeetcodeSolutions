class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n = a.size();
        int low = 1;
        int high = n-2;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){   //peak
                return mid;   
            }
            else if(a[mid]<a[mid+1]){ // Decreasing side;
                low = mid+1;
            }
            else {   //increasing side
                high = mid-1;
            }
        }
        return -1;;
    }
};