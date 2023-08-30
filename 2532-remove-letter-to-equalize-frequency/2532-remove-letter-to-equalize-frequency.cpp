class Solution {
public:
    bool equalFrequency(string word) {
        int n=word.size();
        map<char,int> mp;
        for(auto it:word)
        {
            mp[it]++;
        }
        vector<int> freq(256,0);
        for(auto it: word)
        {
            freq[it]++;
        }
        set<char> st;
        for(auto it: word)
        {
            st.insert(it);
        }
        
        
        for(auto it: mp)
        {
            set<char> temp;
            freq[it.first]--;
            for(auto i:st)
            {
                if(freq[i]!=0)
                temp.insert(freq[i]);
            }
            if(temp.size()==1)
            {
                return true;
            }
            freq[it.first]++;
        }
        return false;
        
    }
};