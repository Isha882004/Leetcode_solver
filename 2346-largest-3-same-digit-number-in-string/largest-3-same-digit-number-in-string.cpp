class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
       for(int i=2;i<num.length();i++){
        if(num[i-1]==num[i-2] && (num[i]==num[i-2])){
         
                string tr={num[i],num[i-1],num[i-2]};
                if(tr>ans){
                    ans=tr;
                }
            }
        }
       return ans;
    }
};