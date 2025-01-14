class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int row = 0; 
        int col = grid[0].size()-1;
        int count = 0;
        while(row < rows && col >= 0){
            if(grid[row][col] >= 0){
                row++;
            } else {
                count += rows-row;
                col--;
            }
        }
        return count;
    }
};
