class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int i,j=0,k,l,check=1,t;
        l=matrix.size();
        for(i=0;i<l-1;i++)
        {
            for(j=0;j<matrix[i].size()-1;j++)
            {
                if(matrix[i][j]!=matrix[i+1][j+1])
                    return false;
            }
        }
   
        
          return true;
    }
};