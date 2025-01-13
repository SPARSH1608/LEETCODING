class Solution {
public:
    int minimumLength(string s) {
     map<char,int>freq;
     for(char ch:s){
        freq[ch]++;
     }   
     int t=0;
     for(auto it:freq){
        if(it.second==0) continue;
        if(it.second%2==0){
            t+=2;
        }
        else{
            t+=1;
        }
     }
     return t;
    }
};