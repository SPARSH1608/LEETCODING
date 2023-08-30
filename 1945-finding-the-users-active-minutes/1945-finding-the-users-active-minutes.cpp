class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k, 0);
        unordered_map<int, unordered_set<int>> mp;
        for(auto l : logs)
            mp[l[0]].insert(l[1]);
        for(auto m : mp)
            ans[m.second.size()-1]++;
        return ans;
    }
};