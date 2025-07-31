class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
     unordered_set<int>cuur;
     unordered_set<int>res;
     for(int x:arr){
        unordered_set<int>next;
        next.insert(x);
        for(int y:cuur){
            next.insert(x|y);
        }
        res.insert(next.begin(),next.end());
     cuur=next;
     } 
     return res.size();  
    }
};