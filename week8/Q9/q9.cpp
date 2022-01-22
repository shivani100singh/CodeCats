class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        int i,j,k,index,count=0,c,t;
        bool v[101]={false};
        
        for(i=0;i<mat.size();i++)
        {   
            count=0;
            for(j=0;j<mat[i].size();j++)
            {
                if( (mat[i][j]==1) )
                {
                    index=j;
                    v[index]=true;
                    count++;
                }
                if(count>1)
                {   
                    break;
                }
            }
            
            if(count==1 )
            {
                t=0;
                for(k=0;k<mat.size();k++)
                {
                    if( (mat[k][index]==1) )
                    {
                        t++;
                        if(t>1)
                        {  
                            break;}                    
                    }                       
                }
                
                if(k==mat.size())
                {
                    c++;
                
                }
            
            }
        }
        
        return c;
    
        
    }
};