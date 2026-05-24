class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq=1;
        int element=nums[0];



        for(int i=1;i<n;i++){
            if(nums[i]==element){
                freq++;
            }else if (nums[i] != element && freq >0){
                freq--;
            }else if(nums[i] != element && freq == 0){
                element=nums[i];
            }
        }
        return element;
    }
};