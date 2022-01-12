class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int i,c,index,j,k;
        vector<int>v;
        for(i=0;i<matrix.size();i++)
        {  c=matrix[i][0];
            
            for(j=0;j<matrix[i].size();j++)
            {
                if(c>matrix[i][j])
                {
                    c=matrix[i][j];
                    index=j;
                }
            }
         
        
         
            for(k=0;k<matrix.size();k++)
            {
                if(c<matrix[k][index])
                {
                    break;
                }
            }
         
            if(k==matrix.size())
            {
                v.push_back(c);
            }
         
        }
        
        return v;
        
    }
};