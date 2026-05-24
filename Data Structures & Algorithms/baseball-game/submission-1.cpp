class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int n= operations.size();

        for(int i=0;i<n;i++)
        {
            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+" )
            {
                int a = stoi(operations[i]);
                s.push(a);
            }else if(operations[i]=="C")
            {
              s.pop();
            }else if(operations[i]=="D")
            {
               int a=s.top();
               s.push(2*a); 
            }else // +
            {
                int a=s.top();
                s.pop();
                int b= s.top();
                s.pop();
                int c=a+b;
                s.push(b);
                s.push(a);
                s.push(c);
            }
        }
int k=0;
    while(!s.empty()){
        k=k+s.top();
        s.pop();
    }
        return k;
    }
};