class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int,int>Map;
        //khaali map banaya
        for(int i=0;i<n.size();i++){
            int c=t-n[i];
            //c is the complement here
            //ab complement ko map me dhoondho  , how?? with count()
            if(Map.count(c)){
                // complement hai map me 
                return { Map[c],i};
            }
            //mtlb complemet map me nhi hai toh iska mtlb current value ko map me daaldo
            Map[n[i]]=i;
            //order hai (value of element, index)
        }
        return {};
        // koi bhi 2 num ka sum target ke equal nhi hoga toh empty vector return kardo
    }
};