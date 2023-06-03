class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        set<int>a(nums1.begin(),nums1.end());
        set<int>b(nums2.begin(),nums2.end());
        for(int n:a){
            if(b.count(n)){
                v.push_back(n);
            }
        }
        return v;
    }
};