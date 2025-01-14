class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row * col;
        int first_row = 0;
        int last_row = row - 1;
        int first_coloumn = 0;
        int last_coloumn = col - 1;
        int count = 0;

        while (count < total) {
            for (int i = first_coloumn; i <= last_coloumn && count < total; i++) {
                ans.push_back(matrix[first_row][i]);
                count++;
            }
            first_row++;
            for (int i = first_row; i <= last_row && count < total; i++) {
                ans.push_back(matrix[i][last_coloumn]);
                count++;
            }
            last_coloumn--;
            for (int i = last_coloumn; i >= first_coloumn && count < total; i--) {
                ans.push_back(matrix[last_row][i]);
                count++;
            }
            last_row--;
            for (int i = last_row; i >= first_row && count < total; i--) {
                ans.push_back(matrix[i][first_coloumn]);
                count++;
            }
            first_coloumn++;
        }

        return ans;
    }
};
