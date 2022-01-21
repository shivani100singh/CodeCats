class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        
        int i,j,c_index=-1,r_index=-1,count=0;
        for(i=0;i<board.size();i++)
        {
            if ( find(board[i].begin(), board[i].end(), 'R') != board[i].end() )
                {
                     for(j=0;j<8;j++)
                     {
                         if(board[i][j]=='R')
                         {
                             c_index=j;
                             r_index=i;
                              break;
                         }
                        
                     }
                }
            if(c_index!=-1)
                break;
        }
        
        for(i=r_index;i>=0;i--)
        {
            if(board[i][c_index]=='B')
                break;
            else if(board[i][c_index]=='p')
            {count++;
                break;
            }
        }
        
        for(i=r_index;i<8;i++)
        {
            if(board[i][c_index]=='B')
                break;
            else if(board[i][c_index]=='p')
            {
                count++;
                break;
            }
        }
        
        for(i=c_index;i>=0;i--)
        {
            if(board[r_index][i]=='B')
                break;
            else if(board[r_index][i]=='p')
            {count++;
                break;
            }
        }
        
         for(i=c_index;i<8;i++)
        {
            if(board[r_index][i]=='B')
                break;
            else if(board[r_index][i]=='p')
            {count++;
                break;
            }
        }
        
        return count;
        
        
        
    }
};