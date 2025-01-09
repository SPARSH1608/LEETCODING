class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
     vector<string> d = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    set<string>st;
    for (auto w : words){
        string code;
        for(char ch:w) code+=d[ch-'a'];
        st.insert(code);
    }
    return st.size();
    }
};