class Solution {
    private: 
    void solve(string digits, vector<string>&ans , int index, string output, string mapping[]){
        //base case
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }



        //recursive case
        int number=digits[index]-'0'; //2
        string value=mapping[number]; //abc
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]); //a ko output me push kardiya
            solve(digits,ans,index+1,output,mapping);
            //backtrack
            output.pop_back();
        }


    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0){
            return ans;
        }
        int index=0;
        string output="";
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,index,output,mapping);
        return ans;
    }
};