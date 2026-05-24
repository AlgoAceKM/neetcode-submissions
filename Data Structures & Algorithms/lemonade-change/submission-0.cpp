class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int n=bills.size();
        int c1=0,c2=0,c3=0;

        for(int i=0;i<n;i++)
        {
            if(bills[i]==5){
                c1++;
            }
            else if(bills[i]==10 && c1>0){
                c1--;
                c2++;}
            else if(bills[i]==20 && c1>0 && c2 >0){
                c1--;
                c2--;
                c3++;
        }else if(bills[i]==20 && c1 >2){
            c1=c1-3;
            c3++;
        }else return false;
        
            }
            return true;
            }
};