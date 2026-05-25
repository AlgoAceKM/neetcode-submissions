class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        unordered_map<char,int> window;
        int have =0;
        

        int mlen=INT_MAX;
        int mlef=0;

        for(auto x:t){
            need[x]++;
        }
int req= need.size();
int l=0;

for(int r=0;r<s.size();r++){
    window[s[r]]++;

    if(need[s[r]] && window[s[r]]==need[s[r]]) {
        have++;
    }

    while(have == req){
        if (r-l + 1 < mlen) 
            {
         mlen = r- l + 1;
            mlef = l;
            }
            char d =s[l];
            l++;
         if (need.count(d) && window[d] == need[d]) have--;
              window[d]--;
    }
}



return  mlen == INT_MAX ? "" : s.substr(mlef, mlen);
    }
};
