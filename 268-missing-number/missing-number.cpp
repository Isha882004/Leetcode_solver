class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int tt=0;
        int s;
        s=n*(n+1)/2;
        for(int i=0;i<n;i++){
            tt+=nums[i];
        }
        int cnt=s-tt;
        return cnt;
    }
};