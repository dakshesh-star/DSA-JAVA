class Solution {
    public int[][] flipAndInvertImage(int[][] image) {

        int rows = image.length;
        int cols = image[0].length;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols / 2; j++) {
                int temp = image[i][j];
                image[i][j] = image[i][cols - 1 - j];
                image[i][cols - 1 - j] = temp;
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (image[i][j] == 0) {
                    image[i][j] = 1;
                } else {
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
}
    


                
            

        
        
        
    
