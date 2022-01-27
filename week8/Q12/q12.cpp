class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j,r1,c1;
        r1=matrix.size();
        c1=matrix[0].size();
        vector<vector<int>>v1;
        
        for(i=0;i<c1;i++)
        {
            vector<int>v;
            for(j=0;j<r1;j++)
            {
                v.push_back(matrix[j][i]);
            }
            
            v1.push_back(v);
        }
        
        return v1;
        
    }
};