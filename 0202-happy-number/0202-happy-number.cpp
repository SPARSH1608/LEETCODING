class Solution {
    private:
    int newNum(int n){
        int neww=0;
        while(n>0){
            int ld=n%10;
            neww+=ld*ld;
            n/=10;
        }
        return neww;
    }
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1 && !s.count(n)){
            //jab tak n 1 na ban jaaye tab tak ya fir agar yeh loop endless bn jaaye jaise 2 aagya sirf
            s.insert(n);
            n=newNum(n);
        }
        return n==1;
    }
};