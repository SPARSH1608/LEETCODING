class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int m=arr[1]-arr[0];
        bool flag=true;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]!=m){
                flag=false;
            }
        }
        return flag;

    }
};