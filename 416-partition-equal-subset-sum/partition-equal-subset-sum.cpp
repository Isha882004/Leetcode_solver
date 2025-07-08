class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0) return false;
        int target =sum/2;
        bool t[n+1][target +1];
        for(int i=0;i<=n;i++)
        t[i][0] = true;
        for(int j=0;j<=target;j++)
        t[0][j]=false;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++)
{          
             if(nums[i-1]<=j)
             t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
              else{
                t[i][j]=t[i-1][j];
              }
}        } 
return t[n][target];
    }
};