class Solution {
    public int[] sortedSquares(int[] nums) {

        int[] sortedSquares = new int[nums.length];

        for(int i = 0; i < sortedSquares.length; i++) {
            sortedSquares[i] = nums[i] * nums[i];
        }

        for(int i = 0; i < sortedSquares.length; i++) {
            for(int j = 0; j < sortedSquares.length - 1; j++) {
                if(sortedSquares[j] > sortedSquares[j + 1]) {
                    int temp = sortedSquares[j];
                    sortedSquares[j] = sortedSquares[j + 1];
                    sortedSquares[j + 1] = temp;
                }
            }
        }
        return sortedSquares;
    }
}