class Solution {
public:
    int maxSum(vector<int>& nums) {
        bool negative=true;
        int maxx=INT_MIN;
        for(int n:nums){
            if(n>=0) negative=false;
            if(n>maxx) maxx=n;
        }
        if(negative) return maxx;
       unordered_set<int>st(nums.begin(),nums.end());
       int sum=0;
       for(int v:st){
        if(v>0) sum+=v;
       }
return sum;
        
    }
};