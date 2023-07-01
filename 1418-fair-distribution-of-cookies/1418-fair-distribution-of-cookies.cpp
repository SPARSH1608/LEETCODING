class Solution {
public:
int ans;
vector<int>v;
void help(vector<int>&c, int k, int ind){
    //base case
   if(ind==c.size()){
       //saari cookies distribute kardi
       int total=INT_MIN;
   //INT _MIN kyu?  kyonki hume iss particular config ka unfair distribution nikalna hai
   for(int m=0;m<k;m++){
       total=max(total,v[m]);
   }    
   //ab total me iss particular config ki unfair distribution value hai 
      ans=min(ans,total);
   //pr hume toh minimum chahiye na i.e why

   return;
   }
    //recursive case
    //harr cookie ke liye bht saare options honge i.e k options
    //jab ek chhez ke liye bht options ho and recursion ho toh iska mtlb loop lagega
    for(int j=0;j<k;j++){
        v[j]+=c[ind];  // pehli ccokie maine 1st child ko dedi (uska index 0 hai pr i.e j)
        help(c,k,ind+1);  //ab maine firse function call kiya par iss baar cookie number 2 se
        // ab aisa bhi ho skta hai ki yeh cookie pehle child ko nhi milni chahiye thi (for optimal solution)
        // toh isse cookie wapis lelo
        v[j]-=c[ind];
    }
}
    int distributeCookies(vector<int>& c, int k) {
        ans=INT_MAX; // minimum dhoondhna hai
        v.resize(k,0); // v ka size k kardo and usme 0 daaldo harr jaagah pr
        help(c,k,0);   // 0 kyu?? starting index of cookies
        return ans;
    }
};