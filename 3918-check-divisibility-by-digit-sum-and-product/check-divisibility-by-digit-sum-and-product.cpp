class Solution {
public:
    int digiSum(int n){
        int sum = 0;
        while(n){
            sum += n%10;
            n = n/10;
        }
        return sum;
    }
    int digiProd(int n){
        int sum = 1;
        while(n){
            sum *= n%10;
            n = n/10;
        }
        return sum;
    }
    bool checkDivisibility(int n) {
        int sum = digiSum(n) + digiProd(n);
        if(n%sum==0) return true;
        return false;
    }
};