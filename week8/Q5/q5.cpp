class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>v;
        
        
        int i,j,t;
        for(i=0;i<image.size();i++)
        {
            vector<int>v1;
            for(j=image[i].size()-1;j>=0;j--)
            {
                t=!image[i][j];
                v1.push_back(t);
            }
            
            v.push_back(v1);
        }
        
        return v;
    }
};