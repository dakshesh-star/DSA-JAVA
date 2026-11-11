// class Solution {
//     public int maxSubArray(int[] nums) {
//          int max = Integer.MIN_VALUE;
        
//         // oh got it basically after the first loop we will define sum which obviously 0 and second loop goes for the sum 
//         //from i to n-1 and by first loop we got the i and then define sum=sum+arr[j] will
//         // give the exact value and if sum> max max= sum return that

//         for(int i=0; i<nums.length; i++){
//             int sum = 0;
//             for(int j=i; j<nums.length; j++){
//                 sum=sum+nums[j];
//                 if(sum>max){
//                     max=sum;
//                 }
//             }
//         }
//         return max;


//     }
// }
class Solution {
    public int maxSubArray(int[] nums) {

        int sum = nums[0];
        int max = nums[0];

        for(int i = 1; i < nums.length; i++) {

            sum = Math.max(nums[i], sum + nums[i]);

            max = Math.max(max, sum);
        }

        return max;
    }
}
