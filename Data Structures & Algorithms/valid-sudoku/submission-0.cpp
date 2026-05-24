class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();
       

       for(int i=0;i<m;i++){
        unordered_set<char> s;
        for(int j=0;j<m;j++){
            if(board[i][j] == '.') continue;
            if(s.find(board[i][j]) != s.end()){
                return false;
            }else s.insert(board[i][j]);
        }
       }

for(int i=0;i<m;i++){
        unordered_set<char> s;
        for(int j=0;j<m;j++){
            if(board[j][i] == '.') continue;
            if(s.find(board[j][i]) != s.end()){
                return false;
            }else s.insert(board[j][i]);
        }
       }

   for(int row = 0; row < 9; row += 3) {

            for(int col = 0; col < 9; col += 3) {

                unordered_set<char> s;

                for(int i = row; i < row + 3; i++) {

                    for(int j = col; j < col + 3; j++) {

                        if(board[i][j] == '.') continue;

                        if(s.find(board[i][j]) != s.end()) {
                            return false;
                        }

                        s.insert(board[i][j]);
                    }
                }
            }
        }

return true;

    }
};
