class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int n = height.size();
        int lp=0;
        int rp = n-1;
        while(lp<rp){
            int width = rp-lp;
            int high = min(height[lp],height[rp]);
            int area = width*high;
            maxWater=max(maxWater,area);
            height[lp]<height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
    
};