 public:
bool valid(int grid[N][N], int row, int col, int c) {
        for(int i=0;i<N;i++) {
            if(grid[row][i] == c) {
                return false;
            }
            if(grid[i][col]==c) {
                return false;
            }
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==c) {
                return false;
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) {
                if(grid[i][j]== 0) {
                    for(int c=1;c<=9;c++) {
                        if(valid(grid,i,j,c)) {
                            grid[i][j]=c;
                            
                           if(SolveSudoku(grid)==true) {
                               return true;
                           }
                           else {
                               grid[i][j] = 0;
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
    void printGrid (int grid[N][N]) 
    {
       SolveSudoku(grid);
       for(int i=0;i<N;i++) {
           for(int j=0;j<N;j++) {
               cout << grid[i][j] << " ";
           }
           
       }
    }
