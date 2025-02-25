class Solution {
public:
    int strStr(string haystack, string needle)
    {

        if (haystack.size() < needle.size()) return -1;

        string temp{};

        int j = 0;
        int answ = -1;

        int start = 0;

        for (int i = 0; i < haystack.size(); ++i)
        {
            if (haystack[i] == needle[j])
            {
                temp += needle[j];
                ++j;
                answ = i;
            }
            else
            {
                j = 0;
                temp = "";
                answ = -1;
                i = start++;
            }

            if (temp == needle)
                return answ - (needle.size()-1) ;
        }
    
        return -1;
    }
};