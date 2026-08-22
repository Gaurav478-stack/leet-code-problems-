class solution {
public:
   string tictactoe(vector<vector<int>>& moves) {
       vector<int> rows(3,0), cols(3,0);
       int diag = 0 , antidag =0;
       int player = 1;
       for (auto &m : moves){
            int r = m[0], c = m[1];
            rows[r] += player;
            cols[c] += player;
            if(r == c) diag += player;
            if(r + c == 2) diag +=player;
            if(abs(rows[r] == 3 || abs(cols[c] == 3 || abs(diag) == 3 || abs(antidag) == 3) {
              return player == 1 ? "A" : "B"; 
              }
            player *= -1;
      }
        return moves.size() == 9 ? "Draw" : "Pending";
   }

 };
