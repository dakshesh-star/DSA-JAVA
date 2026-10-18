class Solution {
public int missingNumber(int[] nums) {
int n = nums.length;
int actualSum = 0;
    for (int i = 0; i < n; i++) {   //// Expected sum ----- Actual sum =  difference == output 
        actualSum += nums[i];
    }
    int expectedSum = n * (n + 1) / 2;
    return expectedSum - actualSum;
}


}
