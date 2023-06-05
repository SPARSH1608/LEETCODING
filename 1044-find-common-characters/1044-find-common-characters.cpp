class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    
  vector<int>v(26,INT_MAX);
  vector<string>ans;
  for(auto w:words){
      int arr[26]={0};
        for(int i=0;i<w.length();i++){
            arr[w[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            v[i]=min(v[i],arr[i]);
        }
  }
        for(int i=0;i<26;i++){
            if(v[i]>0){
                for(int j=0;j<v[i];j++){
                string str(1,i+'a');
                ans.push_back(str);
                }
               
            }
        }
        return ans;
  
    }
};