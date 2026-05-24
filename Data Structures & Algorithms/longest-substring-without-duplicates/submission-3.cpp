class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxi = 0;
        int l = 0;
        int r = 0;

        unordered_set<char> us;

        while(r < s.size()) {

            if(us.find(s[r]) == us.end()) {

                us.insert(s[r]);
                maxi = max(maxi, r - l + 1);
                r++;

            } else {

                us.erase(s[l]);
                l++;
            }
        }

        return maxi;
    }
};