class Solution {
public:
    int integerBreak(int n) {

        if (n == 2) return 1;
        if (n == 3) return 2;


        vector<int> maxProduct(n + 1, 0);


        maxProduct[1] = 1;
        maxProduct[2] = 2;
        maxProduct[3] = 3;


        for (int num = 4; num <= n; ++num) {
            int maxProductForNum = 0;
     
            for (int subNum = 1; subNum <= num / 2; ++subNum) {
                maxProductForNum = max(maxProductForNum, maxProduct[subNum] * maxProduct[num - subNum]);
            }

            maxProduct[num] = maxProductForNum;
        }

        return maxProduct[n];
    }
};