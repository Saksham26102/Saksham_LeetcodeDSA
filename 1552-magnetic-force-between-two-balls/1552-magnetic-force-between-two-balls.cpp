class Solution{
public:
    bool Possible(vector<int>& arr, int n, int c, int minAllowedDis) {
        int cows = 1;
        int lastStallPos = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] - lastStallPos >= minAllowedDis) {
                cows++;
                lastStallPos = arr[i];
                if (c == cows) {
                    return true;
                }
            }
        }
        return false;
    }

    int maxDistance(vector<int>& arr, int m) {
        sort(arr.begin(), arr.end());
        int start = 1;
        int n = arr.size();
        int end = arr[n - 1] - arr[0];
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (Possible(arr, n, m, mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};