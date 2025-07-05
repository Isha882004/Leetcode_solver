class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int,int>mp;
       for(auto cp: arr){
        mp[cp]++;
       } 
       int res=-1;
       for(auto it =mp.begin();it!=mp.end();it++)
       if(it->first==it->second){
       res=max(res,it->first);}
return res;
    }
};