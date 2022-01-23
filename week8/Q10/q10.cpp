class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int i,j,temp,r,c;
        r=grid.size();
        c=grid[0].size();

        while(k--)
        {
            temp=grid[r-1][c-1];
            for(i=r-1;i>=0;i--)
            {
                for(j=c-1;j>0;j--)
                {
                    grid[i][j]=grid[i][j-1];
                }
                if(i!=0)
                    grid[i][0]=grid[i-1][c-1];
            }
            grid[0][0]=temp;
        }
        
        return grid;
    }
};