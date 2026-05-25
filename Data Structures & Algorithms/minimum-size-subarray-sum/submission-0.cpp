class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int best=INT_MAX;
        int sum=0;

        for(r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum >= target ){
                best=min(best,r-l+1);
                sum-=nums[l++];
            }
        }

        return (best == INT_MAX)?0:best;
    }
};