class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>v1;
        int i,j,to=original.size(),t=0;
        
        if(to!=m*n)
            return v1;
        
        for(i=0;i<m;i++)
        {
            vector<int>v;
            for(j=0;j<n;j++)
            {
                v.push_back(original[t]);
                    t++;
            }
            v1.push_back(v);
        }
        
        return v1;
        
    }
};