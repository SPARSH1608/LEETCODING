class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s;
        for(int i=0;i<candyType.size();i++){
            s.insert(candyType[i]);
        }
        int n=candyType.size();
        int req=n/2;
        if(s.size()<n/2) return s.size();
        return n/2;;
    }
};