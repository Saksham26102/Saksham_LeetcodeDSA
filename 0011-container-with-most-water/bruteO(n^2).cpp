class Solution {
public:
int maxArea(vector<int>& height) {
  int maxWater=0;
  int n = height.size();
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int width = j-i;
      int high = min(height[i],height[j]);
      int area = width*high;
      maxWater=max(maxWater,area);
    }
  }
  return maxWater;
 }
};
