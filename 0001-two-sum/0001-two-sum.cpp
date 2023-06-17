class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        //index value
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int r=target-nums[i];
            if(m.find(r)!=m.end()){
                //hum hamesha key hi search karte hain in hashtables
                //foudn in hashtable
                ans.push_back(i);
                ans.push_back(m[r]);
            }
            m.insert({nums[i],i});
        }
        return ans;
    }
};