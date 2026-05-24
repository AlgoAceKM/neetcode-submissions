class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
     int n=nums.size();
     int j,k;

     for(int i=0;i<n;i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
    j=i+1;
    k=n-1;
    while(j<k){
        if(nums[i]+nums[j]+nums[k]==0){
            ans.push_back({nums[i],nums[j],nums[k]});
          int left = nums[j];
                    int right = nums[k];

                    while(j < k && nums[j] == left) j++;
                    while(j < k && nums[k] == right) k--;
        }else if(nums[i]+nums[j]+nums[k]<0){
            j++;
        }
        else if(nums[i]+nums[j]+nums[k]>0){
            k--;
        }
    }
     }
        return ans;
    }
};
