class Solution {
public:
    string addBinary(string a, string b) {

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int m = a.size();
        int n = b.size();

        string s = "";
        int carry = 0;

        int i = 0;

        while(i < m || i < n || carry) {

            int sum = carry;

            if(i < m)
                sum += a[i] - '0';

            if(i < n)
                sum += b[i] - '0';

            s += (sum % 2) + '0';

            carry = sum / 2;

            i++;
        }

        reverse(s.begin(), s.end());

        return s;
    }
};