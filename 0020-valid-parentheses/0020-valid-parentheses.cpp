class Solution {
public:
    bool isValid(string s) {
        stack<char>st; //ek stack jisme harr value ek character hogi
        for(char c:s){
            // string ke harr character pr iterate karte hai
            //agar koi bhi opening bracket hoga usse directly stack me daaldo
            if(c=='(' || c=='{'|| c=='['){
                    st.push(c);
            }else{
                if(st.empty()){
                    return false;
                    // kyuu?  for valid parenthesis stack empty tab tak nhi hoga
                    // jab tak poori string khtm nhi ho jaaye
                }
                if((c==')' and st.top()=='(') || (c=='}' and st.top()=='{') || (c==']' and st.top()=='[')){
                    st.pop();
                }else{
                    //koi braccket nhi hai mtlb kuch aur character value hogi
                    return false;
                }
            }
        }
        return st.empty();
        //agr valid parenthesis hue toh stack empty hoga mtlb true return hoga varna false
    }
};