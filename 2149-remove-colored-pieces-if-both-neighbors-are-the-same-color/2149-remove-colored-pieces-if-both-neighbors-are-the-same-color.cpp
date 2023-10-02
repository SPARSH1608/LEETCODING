class Solution {
public:
    bool winnerOfGame(string colors) {
        int al=0,bo=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i-1]=='A' && colors[i]=='A' && colors[i+1]=='A'){
                al++;
            }
             if(colors[i-1]=='B' && colors[i]=='B' && colors[i+1]=='B'){
                bo++;
            }
        }
  if(al>bo){
      return true;
  }else return false;
    }
};