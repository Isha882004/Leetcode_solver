class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newi) {
        in.push_back(newi);
        sort(in.begin(),in.end());
        vector<vector<int>>res;
        res.push_back(in[0]);
        for(int i=0;i<in.size();i++){
if(res.back()[1]>=in[i][0]){
    res.back()[1]=max(res.back()[1],in[i][1]);
}else{
    res.push_back(in[i]);
}
        }
        return res;
    }
};