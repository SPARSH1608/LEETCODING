class Solution {
public:
   int countVowelSubstrings(string w) {
    int vow = 0, cnt = 0, m[123] = {};
    string vowels("aeiou");
    for (int i = 0, j = 0, k = 0; i < w.size(); ++i) {
        if (vowels.find(w[i]) != string::npos) {
            vow += ++m[w[i]] == 1;
            for (; vow == 5; ++k)
                vow -= --m[w[k]] == 0;
            cnt += k - j;
        }
        else {
            m['a'] = m['e'] = m['i'] = m['o'] = m['u'] = vow = 0;
            j = k = i + 1;
        }
    }
    return cnt;
}
};