class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream s(sentence);
        string word;
        int idx=1;
        while(s>>word){
            if(word.find(searchWord)==0){
                return idx;
            }
            idx++;
        }
        return -1;
    }
};