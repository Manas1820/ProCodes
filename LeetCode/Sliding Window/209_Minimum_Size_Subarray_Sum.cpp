class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=0,sum=0,ans=INT_MAX;
        for(int e=0;e<nums.size();e++){
            sum+=nums[e];
            while(sum>=target){
                ans=min(ans,e+1-s);
                sum-=nums[s++];
            }
        }
        return ans==INT_MAX?0:ans;
    }
};
