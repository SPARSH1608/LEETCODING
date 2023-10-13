class Solution {
    void fun(int ind, vector<int>&candidates,int target,vector<int>&v,vector<vector<int>>&ans){
	//base case

		if(target==0){
			ans.push_back(v);
             return;
				
		}

	

	//recursive case
	for(int i=ind;i<candidates.size();i++){
		if(i>ind && candidates[i]==candidates[i-1]) continue;
		if(candidates[i]>target) break;
		v.push_back(candidates[i]);
		fun(i+1,candidates,target-candidates[i],v,ans);
		v.pop_back();
	}

}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>v;
	vector<vector<int>>ans;
    fun(0,candidates,target,v,ans);
    return ans;
    }
};