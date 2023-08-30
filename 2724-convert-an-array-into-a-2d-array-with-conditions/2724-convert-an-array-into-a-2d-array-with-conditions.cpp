class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> hash(201, 0); 
        for(auto &n: nums) hash[n]++; 
        vector<vector<int>> res; 
        
        bool fl = false; 
        while(true){
            vector<int> t; 
            for(int i=0; i<=200; i++){
                if(hash[i]>0){
                    t.push_back(i); 
                    hash[i]--; 
                    fl = true; 
                }
            }
            if(fl)
                res.push_back(t);
            if(!fl) return res; 
            fl = false; 
        }
        return res; 
    }
};