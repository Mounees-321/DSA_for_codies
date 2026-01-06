class Solution {
public:
    int minimumTotal(vector<vector<int>>& tg) {
        int m = tg.size() , n = tg[m-1].size();
        if(m==1)
            return tg[0][0];

        vector<vector<long long>> dp(m,vector<long long>(n,INT_MAX));
        dp[0][0] = tg[0][0];

        for(int i=1; i<m; i++)
        {
            int z = tg[i].size();
            for( int j=0; j<z; j++)
            {
                int up_bf = INT_MAX , up = INT_MAX;
                if(j-1>=0)
                {
                    up_bf = dp[i-1][j-1];
                   // cout<<"hi"<<up_bf;
                }

                up = dp[i-1][j];
                cout<<up_bf<<" "<<up<<endl;
                dp[i][j] = min(up_bf,up)+tg[i][j];
                
            }
        }

        long long mn = INT_MAX;
        for (int j = 0; j < n; j++) {
        mn = min(mn, dp[m - 1][j]);
    }
    return mn;

    
        
    }
};