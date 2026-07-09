class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int bestMax = a[0];
        int bestMin = a[0];
        int resMax= a[0];
        int resMin= a[0];
        int sum = a[0];

        for(int i = 1;i<a.size();i++){
            int prevBestMax = bestMax;
            int prevBestMin = bestMin;

            bestMax = max(prevBestMax+a[i], a[i]);
            resMax = max(resMax,bestMax);

            bestMin = min(prevBestMin+a[i], a[i]);
            resMin = min(resMin,bestMin);

            sum+= a[i];
        } 
        if(a.size()==1) return a[0];

        // All elements are negative
        if (resMax < 0)
            return resMax;
        

        return max(resMax,(sum-resMin)); //-10 -(-10) =0
    }
};