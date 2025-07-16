class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int ce=0,oe=0;
        for(int c:nums){
            if(c% 2==0) ce++;
            else oe++;
        }
        int even=0,odd=0;
        for(int num: nums){
            if(num%2==0) even=max(even,odd+1);
            else odd=max(odd,even+1);
        }
        return max({ce,oe,even,odd});
    }
};