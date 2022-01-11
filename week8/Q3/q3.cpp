class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int i,j,count=0;
        for(i=0;i<grid.size();i++)
        {
            for(j=grid[i].size()-1;j>=0;j--)
            {
                if(grid[i][j]<0)
                {
                    count++;
                }
                else
                    break;
            }
        }
        return count;
    }
};