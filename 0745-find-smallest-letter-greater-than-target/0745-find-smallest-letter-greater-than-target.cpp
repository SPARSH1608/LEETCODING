class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans='0';
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target){
                ans=letters[i];
                break;
            }
        }
        return (ans=='0')?letters[0]:ans;
    }
};