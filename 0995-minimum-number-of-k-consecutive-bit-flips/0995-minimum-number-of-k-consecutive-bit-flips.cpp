class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> flipped(n, 0);
        int flipCount = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {

            // Remove the effect of an expired flip
            if (i >= k) {
                flipCount -= flipped[i - k];
            }

            // Check the current effective value
            if ((nums[i] + flipCount) % 2 == 0) {

                // Cannot flip if fewer than k elements remain
                if (i + k > n)
                    return -1;

                flipped[i] = 1;
                flipCount++;
                ans++;
            }
        }

        return ans;
    }
};