class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n=arr.size();
        vector<int>res;
        for(int curr=n;curr>1;curr--){
            int idx= find(arr.begin(),arr.end() ,curr)-arr.begin();
            if(idx==curr-1) continue;
            if(idx!=0){
                reverse(arr.begin(),arr.begin() + idx+1);
                res.push_back(idx+1);
            }
            reverse(arr.begin(),arr.begin()+curr);
            res.push_back(curr);
    }return res;
    }
};