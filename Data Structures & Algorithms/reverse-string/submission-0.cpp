class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int p=0;
        int q=n-1;
        int temp;

        while(p<n/2){
            temp=s[p];
            s[p]=s[q];
            s[q]=temp;
            p++;
            q--;
        }
    }
};