class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;

        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {

            // start of sequence
            if(s.find(nums[i] - 1) == s.end()) {

                int curr = nums[i];
                int count = 1;

                while(s.find(curr + 1) != s.end()) {
                    curr++;
                    count++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};