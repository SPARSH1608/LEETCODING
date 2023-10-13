class Solution {
private:
    void fun(int ind, int t, vector<int>&v, vector<vector<int>>&ans ,vector<int>& candidates){
	int n=candidates.size();

	if(ind==n){
		if(t==0){
			ans.push_back(v);
		}
		return;
	}
	if(candidates[ind]<=t){
		v.push_back(candidates[ind]);
		fun(ind,t-candidates[ind],v,ans,candidates);
		v.pop_back();

	}

fun(ind+1,t,v,ans,candidates);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int t) {
        vector<vector<int>>ans;
        vector<int>v;
        fun(0,t,v,ans,candidates);
        return ans;
    }
};