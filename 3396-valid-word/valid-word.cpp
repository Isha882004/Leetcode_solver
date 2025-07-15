class Solution {
public:
    bool isValid(string word) {
        int n=word.length();
        if(n<3) return false;
        int v=0,co=0;
        string vo="aeiouAEIOU";
        for(char c:word){
            if(isalpha(c)){
                if(vo.find(c)!=string ::npos){
                    v++;
                }
                else{
                    co++;
                }
            }
            else if(!isdigit(c)){ return false;
        }}
        return v>=1 && co>=1;
    }
};