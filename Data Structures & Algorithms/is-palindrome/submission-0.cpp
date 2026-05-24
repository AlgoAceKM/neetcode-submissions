class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int p=0;
        int q=n-1;

while(p<q){
    while(!isalnum(s[p]) && p<q){
        p++;
    }
    while(!isalnum(s[q]) && p<q){
        q--;
    }
    if(tolower(s[p]) != tolower(s[q])){
        return false;
    }
    p++;
    q--;
}
return true;
    }
};
