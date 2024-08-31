//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class Driver_class
{
    public static void main(String args[])
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int grid[][] = new int[9][9];
            for(int i = 0; i < 9; i++)
            {
                for(int j = 0; j < 9; j++)
                grid[i][j] = sc.nextInt();
            }
            
            Solution ob = new Solution();
            
            if(ob.SolveSudoku(grid) == true)
                ob.printGrid(grid);
            else
                System.out.print("NO solution exists");
            System.out.println();
            
        }
    }
}




// } Driver Code Ends


//User function Template for Java

class Solution
{
    //Function to find a solved Sudoku. 
    public static boolean isSafe(int[][]grid,int row,int col,int number){
        for(int i=0;i<grid.length;i++){
            if(grid[i][col]==number){
                return false;
            }
            if(grid[row][i]==number){
                return false;
            }
        }
        int sr=(row/3)*3;
        int sc=(col/3)*3;
        
        for(int i=sr;i<sr+3;i++){
            for(int j=sc;j<sc+3;j++){
                if(grid[i][j]==number){
                    return false;
                }
            }
        }
        return true;
    }
    public static boolean helper(int[][] grid,int row,int col){
        if(row==grid.length){
            return true;
        }
        int nrow=0;
        int ncol=0;
        if(col!=grid.length-1){
            nrow=row;
            ncol=col+1;
        }
        else{
            nrow=row+1;
            ncol=0;
        }
        if(grid[row][col]!=0){
            if(helper(grid,nrow,ncol)){
                return true;
            }
        }
        else{
            for(int i=1;i<=9;i++){
                if(isSafe(grid,row,col,i)){
                    grid[row][col]=i;
                    if(helper(grid,nrow,ncol)){
                        return true;
                    }
                    else{
                        grid[row][col]=0;
                    }
                }
            }
        }
        return false;
    }
    static boolean SolveSudoku(int grid[][])
    {
        // add your code here
        Solution solver = new Solution();
        return solver.helper(grid, 0, 0);
    }
    
    //Function to print grids of the Sudoku.
    static void printGrid (int grid[][])
    {
        // add your code here
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                System.out.print(grid[i][j]+" ");
            }
            // System.out.println();
        }
    }
}


