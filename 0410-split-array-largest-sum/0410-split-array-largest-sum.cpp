class Solution {
public:
    bool isValid(vector<int>& nums, int m, int n, int maxAllowedPages){
        int stu =1;
        int pages =0;
        for(int i = 0; i<n ; i++){

        if(nums[i]> maxAllowedPages){
            return false;
        }
        if(nums[i]+pages <= maxAllowedPages){
            pages = pages + nums[i];
        }
        else{
            stu++;
            pages = nums[i];
        }
        }
        return stu>m ? false : true;
        }
    
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        if(m>n){
            return -1;
        }
        int sum = 0;
        for(int i = 0; i < n ; i++){
            sum +=nums[i];
        }
        int ans = -1;
        int st=0;
        int end = sum;

        while(st <= end){
        int mid = st +(end - st)/2;
        if(isValid(nums,m,n,mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            st = mid + 1;
        }
        }
        return ans;
    }
};