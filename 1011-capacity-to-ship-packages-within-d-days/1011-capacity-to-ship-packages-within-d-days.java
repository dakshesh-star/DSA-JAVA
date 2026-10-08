class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int low = 0;
        int high = 0;
        for (int i = 0; i < weights.length; i++) {
            low = Math.max(low, weights[i]);
            high += weights[i];
        }
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int daysNeeded = 1;
            int currentWeight = 0;
            for (int i = 0; i < weights.length; i++) {

                if (currentWeight + weights[i] <= mid) {
                    currentWeight += weights[i];
                } else {
                    daysNeeded++;
                    currentWeight = weights[i];
                }
            }
            if (daysNeeded <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
}