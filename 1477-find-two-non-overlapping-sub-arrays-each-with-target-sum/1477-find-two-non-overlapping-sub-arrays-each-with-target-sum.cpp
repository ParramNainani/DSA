class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();

        vector<int> best(n, INT_MAX);

        int left = 0;
        int sum = 0;
        int shortest = INT_MAX;
        int ans = INT_MAX;

        for (int right = 0; right < n; right++) {

            sum += arr[right];

            while (sum > target) {
                sum -= arr[left];
                left++;
            }

            if (sum == target) {
                int len = right - left + 1;

                // combine current subarray with one before it
                if (left > 0 && best[left - 1] != INT_MAX) {
                    ans = min(ans, len + best[left - 1]);
                }

                shortest = min(shortest, len);
            }

            best[right] = shortest;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};