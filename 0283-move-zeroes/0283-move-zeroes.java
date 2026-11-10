class Solution {
    public void moveZeroes(int[] nums) {

        // define j without loop then define i with loop
        // then aftterwards if i # 0 then swap it with j
        // this is the whole concept of the question

        int j=0;
        for(int i=0; i<nums.length; i++){
            if(nums[i] != 0) {
                //Swap now
                 int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;

                j++;
        }




    }
}
}
       