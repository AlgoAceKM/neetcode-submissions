class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        int m=s2.size();

if(k>m) return false;
        vector<int> freq(26,0);
        vector<int> need(26,0);

    for(int i=0;i<k;i++){
        need[s1[i]-'a']++;
    }

    int l=0;
    for(int r=0;r<m;r++){
        freq[s2[r]-'a']++;

        if(r-l+1 > k){
            freq[s2[l++]-'a']--;
        }

        if(need == freq) return true;
    }
    return false;
    }
};
