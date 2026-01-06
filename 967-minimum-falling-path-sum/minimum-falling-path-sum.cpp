class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& tg) {
        int m = tg.size() ,n = m;
        if(m==1)
            return tg[0][0];

        vector<vector<long long>> dp(m,vector<long long>(n));
        
        for(int k = 0; k<m; k++)
        {
            dp[0][k] = tg[0][k];
        }
        

        for(int i=1; i<m; i++)
        {
            
            for( int j=0; j<n; j++)
            {
                long long up_bf = INT_MAX , up = INT_MAX , up_af = INT_MAX;
                if(j-1>=0)
                {
                    up_bf = dp[i-1][j-1];
                }
                 up = min(dp[i-1][j],up_bf);

                if(j+1<n)
                    up_af = dp[i-1][j+1];
                    

                 dp[i][j] = min(up,up_af)+tg[i][j];
                
            }
        }

        long long mn = INT_MAX;
        for (int j = 0; j < n; j++) {
        mn = min(mn, dp[m - 1][j]);
    }
    return mn;
    }
};