
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string, int> wordCount;
        set<string> bannedSet(banned.begin(), banned.end());

        // Convert all characters to lowercase and replace non-alphanumeric characters with spaces
        for (char &c : paragraph) {
            if (isalpha(c)) {
                c = tolower(c);
            } else {
                c = ' ';
            }
        }

        stringstream ss(paragraph);
        string word;
        while (ss >> word) {
            if (bannedSet.find(word) == bannedSet.end()) {
                wordCount[word]++;
            }
        }

        int maxCount = 0;
        string mostCommonWord;
        for (const auto& entry : wordCount) {
            if (entry.second > maxCount) {
                maxCount = entry.second;
                mostCommonWord = entry.first;
            }
        }

        return mostCommonWord;
    }
};
