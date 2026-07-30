class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2==1) return false;
        stack<char>st;
        for(int i  = 0; i<s.length();i++){
            if(s[i]=='(' ||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
                continue;
            }
            if(st.empty()) return false;

            if(s[i]==')' && st.top()=='('){
                st.pop();
                continue;
            }
            else if(s[i]=='}' && st.top()=='{'){
                st.pop();
                continue;
            }
            else if(s[i]==']' && st.top()=='['){
                st.pop();
                continue;
            } 
            else 
               return false; // "([}}])" Output true Expected false agar nahi lagaya to

        }
        if(!st.empty()) return false;

        return true;
    }
};