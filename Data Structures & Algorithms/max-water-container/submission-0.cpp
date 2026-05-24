class Solution {
public:
    int maxArea(vector<int>& heights) {
        int h=heights.size();
        int p=0;
        int q=h-1;
        int best=0;
        int s=0;
        while(p<q){
            s=min(heights[p],heights[q]);
            best=max(best,s*(q-p));
            if(heights[p] < heights[q]) {
                p++;
            }  else q--;
                  }
                  return best;
    }
};
