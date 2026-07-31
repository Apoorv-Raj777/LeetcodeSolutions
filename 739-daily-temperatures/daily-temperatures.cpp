class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        vector<int>res(n);
        stack<int>st;
        st.push(n-1); // indices store karenge // cnt wali bakchodi nahi karna hai
        res[n-1] = 0;
        for(int i = n-2; i>=0; i--){
            while(!st.empty() && temps[st.top()]<=temps[i]){
                st.pop();
               }
            if(st.empty()) res[i] = 0;
            else{
                res[i] = st.top()-i;
            }
            st.push(i);
        }
        return res;
    }
};