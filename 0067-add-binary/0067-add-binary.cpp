 class Solution {
public:
    
    string addBinary(string a, string b) {
        if(a.length()<b.length()) swap(a,b);
        int n=a.length(),m=b.length();
        int carry=0;
        int i=n-1,j=m-1;
        while(j>=0){
            int sum=(a[i]-'0')+(b[j]-'0')+carry;
            a[i]=(sum%2+'0');
            carry=sum/2;
            i--;
            j--;
        }
        while(carry && i>=0){
            int sum=(a[i]-'0')+carry;
            a[i]=(sum%2+'0');
            carry=sum/2;
            i--;
        }
        if(carry) a="1"+a;
        return a;
    }
};