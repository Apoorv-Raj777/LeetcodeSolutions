class Solution {
public:
    double myPow(double x, int n) {
        int m = n;
        long long N = n;
        if(N<0) N = -N;
        double ans = 1;

        while(N>0){
            if(N%2==1){         // for odd
                ans = ans * x;
                N= N-1;
            }
            else{                // for even 
                N = N/2;
                x = x*x;
            }
        }
        if(m<0) ans = 1.0/ans;

        return ans;
    }
};