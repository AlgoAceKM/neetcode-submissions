class Solution {
public:

    bool check(string &s, int l, int r){

        while(l < r){
            if(s[l] != s[r]){
                return false;
            }

            l++;
            r--;
        }

        return true;
    }

    bool validPalindrome(string s) {

        int p = 0;
        int q = s.size() - 1;

        while(p < q){

            if(s[p] == s[q]){
                p++;
                q--;
            }
            else{
                return check(s, p + 1, q) || check(s, p, q - 1);
            }
        }

        return true;
    }
};