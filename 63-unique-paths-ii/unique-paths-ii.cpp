class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        int m = og.size() , n = og[0].size();
        if(og[0][0])
            return 0;
        vector<vector<int>> dp(m,vector<int>(n));
        dp[0][0]=1;
        for(int i=0; i<m ; i++)
        {
            for(int j=0; j<n ; j++)
            {
                if(i==0&&j==0)
                    continue;
                if(og[i][j]==1)
                {
                    dp[i][j]=0;
                }
                else
                {
                    if(i==0||j==0)
                    {
                        if(i==0)
                            dp[i][j] = dp[i][j-1];
                        else
                            dp[i][j] = dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i-1][j] + dp[i][j-1];
                    }
                }
            }}



            return dp[m-1][n-1];
        
    }
};