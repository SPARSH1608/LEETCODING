class Solution {
    string rev(string s){
        int i=0;
        int j=s.length()-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string fans,word;
        while(iss>>word){

      
           fans+= rev(word);
           fans+=" ";
        }
        return fans.substr(0,fans.size()-1);
    }
};