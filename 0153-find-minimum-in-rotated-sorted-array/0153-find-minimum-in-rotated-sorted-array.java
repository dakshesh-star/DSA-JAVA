class Solution {
    public int findMin(int[] nums) {
        return binarySearch(nums, 0, nums.length - 1);
    }
    public int binarySearch(int[] nums, int low, int high) {
        // Array is already sorted
        if (nums[low] <= nums[high]) {
            return nums[low];
        }
        int mid = low + (high - low) / 2;
        // Minimum is in right half
        if (nums[mid] > nums[high]) {
            return binarySearch(nums, mid + 1, high);
        }
        // Minimum is in left half
        return binarySearch(nums, low, mid);
    }
}
