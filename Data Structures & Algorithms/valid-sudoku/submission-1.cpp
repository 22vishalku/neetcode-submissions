class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map<char,int> m;

        for(int i=0;i<9;i++){

            // Row
            m.clear();
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(m[board[i][j]]==0) m[board[i][j]]++;
                else return false;
            }

            // Column
            m.clear();
            for(int j=0;j<9;j++){
                if(board[j][i]=='.') continue;
                if(m[board[j][i]]==0) m[board[j][i]]++;
                else return false;
            }

            // 3x3 Box
            m.clear();
            int sr=(i/3)*3;
            int sc=(i%3)*3;

            for(int r=sr;r<sr+3;r++){
                for(int c=sc;c<sc+3;c++){
                    if(board[r][c]=='.') continue;
                    if(m[board[r][c]]==0) m[board[r][c]]++;
                    else return false;
                }
            }
        }

        return true;
    }
};