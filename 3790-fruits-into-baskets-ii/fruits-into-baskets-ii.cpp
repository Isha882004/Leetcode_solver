class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fr, vector<int>& b) {
       
        int n=fr.size();
        int m=b.size();
       int ans=n;
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
                if(fr[i]<=b[j]){
                    ans--;
                    b[j]=0;
                    break;
                }
          }
           
        }
        return ans;
    }
};