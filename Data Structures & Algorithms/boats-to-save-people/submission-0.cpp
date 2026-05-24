class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int p=0;
        int n=people.size();
        int q=n-1;
        int k=0;


        while(p<=q){
            if(people[q]==limit){
                k++;
                q--;
            }else if(people[q]+people[p]<= limit){
                k++;
                p++;
                q--;
            }else if(people[q]<limit){
                k++;
                q--;
            }
        }
        return k;
    }
};