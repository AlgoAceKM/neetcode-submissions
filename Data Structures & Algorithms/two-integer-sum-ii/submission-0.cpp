class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int p=0;
        int q=n-1;
        vector <int> nums;
       while(p<q)
       { if(numbers[p]+numbers[q]<target){
            p++;
        }else if(numbers[p]+numbers[q]>target){
            q--;
        }else{
            nums.push_back(p+1);
            nums.push_back(q+1);
            return nums;
        }}
return nums;
    }
};
