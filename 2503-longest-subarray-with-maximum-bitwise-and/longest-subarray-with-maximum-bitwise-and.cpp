class Solution {
public:
    int longestSubarray(vector<int>& nums) {
     if(nums.empty()){
        return 0;
     }   
     int val=0;
     for(int num:nums){
        if(num>val)
{
    val=num;
}     }
int len=0,cur=0;
for(int num:nums){
    if(num==val){
        cur++;
    }
    else{
        len=max(len,cur);
        cur=0;
    }
}return max(len,cur);
    }
};