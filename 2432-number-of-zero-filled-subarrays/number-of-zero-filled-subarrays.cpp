class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt=0,st=0;
        for(int num:nums){
            if(num==0){
                st++;
                cnt+=st;
            }
            else{

                st=0;
            }
        }
        return cnt;
    }
};