class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int i,j,count=0,perimeter=0,r,c;
        r=grid.size();
        for(i=0;i<r;i++)
        {
            for(j=0;j<grid[i].size();j++)
            {   c=grid[i].size();
                if(grid[i][j]==1)
                {
                    count=4;
                    if( ((i-1)!=-1) && (grid[i-1][j]==1) )
                    {
                        count--;
                    }
                    if( ((j-1)!=-1) && (grid[i][j-1]==1) )
                    {
                        count--;
                    }
                    if( ((i+1)<r) && (grid[i+1][j]==1) )
                    {
                        count--;
                    }
                    if( ((j+1)<c) && (grid[i][j+1]==1) )
                    {
                        count--;
                    }
                    perimeter+=count;
                }
            }
        }
        
        return perimeter;
        
    }
};