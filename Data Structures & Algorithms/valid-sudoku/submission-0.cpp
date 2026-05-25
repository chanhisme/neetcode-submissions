class Solution {
public:
    bool isValidSudoku(vector<vector<char>>&b) {
        for(int r = 0; r < 9; r++){
            unordered_set <char> seen;
            for(int c = 0; c < 9; c++){
                if(b[r][c] == '.'){
                    continue;
                }
                else if(seen.count(b[r][c])){
                    return false;
                }
                seen.insert(b[r][c]);
            }
        }
        for(int c = 0; c < 9; c++){
            unordered_set <char> seen;
            for(int i = 0; i < 9; i++){
                if(b[i][c] == '.'){
                    continue;
                }
                else if(seen.count(b[i][c])){
                    return false;
                }
                seen.insert(b[i][c]);
            }
        }
        for(int sq= 0; sq < 9; sq++){
            unordered_set <char> seen;
            for(int i = 0; i < 3; i++){
                for(int j =0; j < 3; j++){
                    int r = (sq / 3) * 3 + i;
                    int c = (sq % 3) * 3 + j;
                    if(b[r][c] == '.') continue;
                    if(seen.count(b[r][c])){
                        return false;
                    }
                    seen.insert(b[r][c]);
                }

            }
        }
        return true;









    }
};
