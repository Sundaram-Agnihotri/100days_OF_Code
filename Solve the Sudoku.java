class Solution
{
    static boolean isSafe(int row , int col ,int  grid[][], int val )
    {
        int n = grid.length;
        for (int i =0; i<n ;i++){
            if (grid[row][i]==val)
            return false;
            if (grid[i][col]== val)
            return false;
            // 3*3 check martix
            if (grid[3*(row/3) +i/3][3*(col/3)+i%3]== val)
            return false ;
        }
        return true;
    }
    //Function to find a solved Sudoku. 
    static boolean SolveSudoku(int grid[][])
    {
        int n = grid.length;
        for (int row =0; row <n; row++){
            for (int col =0; col<n; col++){
                if (grid[row][col]==0){
                    for (int val =1; val <=9 ; val++){
                        if (isSafe(row, col , grid, val)){
                            grid[row][col] = val;
                            
                        boolean pendingSolution = SolveSudoku(grid);
                        if (pendingSolution)
                        return true;
                        else {
                           grid[row][col] =0; 
                        }
                        
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    static void printGrid (int grid[][])
    {
        // add your code here
        SolveSudoku(grid);
        if (SolveSudoku(grid)) {
        for (int row = 0; row < grid.length; row++) {
            for (int col = 0; col < grid.length; col++) {
                System.out.print(grid[row][col]+" ");
            }
            
        }
    } else {
        System.out.println("No solution exists.");
    }
        
    }
}
