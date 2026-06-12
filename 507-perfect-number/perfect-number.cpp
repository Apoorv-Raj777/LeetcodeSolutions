class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num ==1) return false;
        int n = num;
        int sum =1;
        for(int i =2; i*i<=n;i++){
            if(n%i==0){
                sum +=i;

                if(i!=n/i) 
                  sum+= n/i;
            }
        }
        return sum == num;
    }
};