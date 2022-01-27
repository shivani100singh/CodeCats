class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        
        vector<vector<int>>new_v;
        
        int total=mat.size()*mat[0].size();
        int new_t=r*c;
        int i,j,k,t,r1,c1;
        
        r1=0,c1=0;
        
        if(total!=new_t)
        {
            return mat;
        }
        
        for(i=0;i<r;i++)
        {
            vector<int>v;
            for(j=0;j<c;j++)
            {
                v.push_back(mat[r1][c1]); 
                
                     c1++;
                    if(c1>=mat[0].size())
                    {
                        r1++;
                        c1=0;
                    }
            }
            
            new_v.push_back(v);
        }
        
        
        return new_v;
    }
};