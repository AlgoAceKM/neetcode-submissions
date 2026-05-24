class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
       int l=0;
    int r=k-1;
        for(l=0;r<n;l++){
            ans.push_back(*max_element(nums.begin()+l, nums.begin()+r+1));
            r++;
        }
        return ans;
    }
};
