class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        vector<int>v;
        v.push_back(0);
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(s[i]=='(') st.push('(');

            else if(!st.empty() and s[i]==')' and st.top()=='(' ){
                st.pop();
            }
            
            if(st.empty()){
                v.push_back(i);
            }
        }
        //s = "(()())(())" v=[0,5,9] => outerbrackets (0,5) (6,9)
        // s = "(()())(())(()(()))" v=[0,5,9,17] =>outerbrackets - (0,5) (6,9) ,(10,17)
        string ans="";
        for (int i = 0; i < v.size() - 1; i++) {
            int start = v[i];
            int end = v[i + 1];
            cout<<start<<" "<<end;
            ans += s.substr(start + 1, end - start - 1); 
            v[i+1]++;
        }
        return ans;
    }
};