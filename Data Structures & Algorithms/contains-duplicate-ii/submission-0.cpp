class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_set<int> st;
        
        int l = 0;

        for(int r = 0; r < nums.size(); r++) {
            if(st.count(nums[r])) {
                return true;
            }

            st.insert(nums[r]);
            if(r - l >= k) {
                st.erase(nums[l]);
                l++;
            }
        }

        return false;
    }
};