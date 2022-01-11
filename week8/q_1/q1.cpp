class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int c=0,i,j,sum;
        for(i=0;i<accounts.size();i++)
        {   sum=0;
            for(j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
            }
         
                if(c<sum)
                {
                    c=sum;
                }
        }
     
        return c;
    }
};