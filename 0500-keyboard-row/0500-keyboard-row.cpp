class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>rows={"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        unordered_map<char,int>rowMap;
        for(int i=0;i<3;i++){
            for(char ch : rows[i]){
                rowMap[tolower(ch)]=i;
            }
        }vector<string>ans;
        for(string s:words){
            int rowNumber=rowMap[tolower(s[0])];
            //maan liya saare character s[0] ki row me hi honge
            bool samerow=true;
            for(char ch:s){
                if(rowMap[tolower(ch)]!=rowNumber){
                    samerow=false;
                    break;
                }
            }
            if(samerow) ans.push_back(s);
        }
        return ans;
    }
};