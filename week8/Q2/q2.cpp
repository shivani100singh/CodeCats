class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         int i,j,t,sum=0;
        for(i=0;i<mat.size();i++)
        {
            t=mat[i].size()-1;
            sum+=mat[i][i];
            if(i!=(t-i))
            sum+=mat[i][t-i];
        }
        
        return sum;
        
    }
};