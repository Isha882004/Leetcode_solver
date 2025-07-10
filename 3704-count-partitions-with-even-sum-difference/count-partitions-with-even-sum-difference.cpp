class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int left=0,right=0;
        int cnt=0;
        for(int i=0;i<n-1;i++){
            left+=nums[i];
            int right=sum-left;
            if((right-left)%2==0) cnt++;
        }
        return cnt;
    }
};