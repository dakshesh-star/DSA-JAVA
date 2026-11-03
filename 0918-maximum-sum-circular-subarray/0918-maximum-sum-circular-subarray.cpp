class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;

        int currMax = 0, maxSum = INT_MIN;
        int currMin = 0, minSum = INT_MAX;

        for (int num : nums) {
            // Maximum subarray sum
            currMax = max(num, currMax + num);
            maxSum = max(maxSum, currMax);

            // Minimum subarray sum
            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);

            total += num;
        }

        // If all elements are negative
        if (maxSum < 0)
            return maxSum;

        return max(maxSum, total - minSum);
    }
};