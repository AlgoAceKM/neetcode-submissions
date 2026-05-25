class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        vector<int> fre(26,0);
       int maxi=0;int best=0;

        for(int r=0;r<s.size();r++)
        {
            fre[s[r]-'A']++;
            maxi=max(maxi,fre[s[r]-'A']);

          if ((r-l + 1)- maxi > k) {
            fre[s[l++]-'A']--;
            }
            best = max(best,r-l + 1);
        }


        return best;
    }
};
