// class Solution {
//     public int maxArea(int[] height) {
//         int maxi = 0;
//         for(int i=0; i<height.length; i++){
//             for(int j=i+1; j<height.length; j++){

//                 int l = j-i;
//                 int b =Math.min(height[i], height[j]);

//                 int area = l*b;
//                  maxi = Math.max(maxi, area);
//             }
//         }

//         return maxi;
//     }
// }

class Solution {
    public int maxArea(int[] height) {

        int left = 0;
        int right = height.length - 1;
        int maxArea = 0;

        while (left < right) {

            int width = right - left;
            int h = Math.min(height[left], height[right]);

            int area = width * h;

            maxArea = Math.max(maxArea, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
}
      