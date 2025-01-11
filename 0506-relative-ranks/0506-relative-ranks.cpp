class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> p;
        for (int i = 0; i < score.size(); ++i) {
            p.push({score[i], i});
        }
        vector<string> res(score.size());
        int rank = 1;
        while (!p.empty()) {
            int index = p.top().second;
            p.pop();
            if (rank == 1) {
                res[index] = "Gold Medal";
            } else if (rank == 2) {
                res[index] = "Silver Medal";
            } else if (rank == 3) {
                res[index] = "Bronze Medal";
            } else {
                res[index] = to_string(rank);
            }
            ++rank;
        }
        return res;
    }
};