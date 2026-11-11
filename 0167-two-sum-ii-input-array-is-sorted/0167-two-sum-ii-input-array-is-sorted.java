// class Solution {
//     public int[] twoSum(int[] numbers, int target) {

//         for (int i = 0; i < numbers.length; i++) {

//             for (int j = i + 1; j < numbers.length; j++) {

//                 if (numbers[i] + numbers[j] == target) {
//                     return new int[]{i + 1, j + 1};
//                 }
//             }
//         }

//         return new int[]{-1, -1};
//     }
// }
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int i = 0;
        int j = numbers.length - 1;
        while (i < j) {                                                   // int i=0; 
            int sum = numbers[i] + numbers[j];                            // int j= nums.length-1
            if (sum == target) {                                          // while(i<j)    int sum = i+j
                return new int[]{i + 1, j + 1};                            // if sum = target  return new i+j
            }
            else if (sum < target) {                                       // else if sum< target i+++
                i++;                                                       // else{ j--}
            }
            else {
                j--;
            }
        }
        return new int[]{-1, -1};
    }
}
        
    
