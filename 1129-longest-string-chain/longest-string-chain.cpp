class Solution {
public:

    static bool compare(string a,string b)
    {
        if(a.size()!=b.size()+1) return false;
        
        int p = 0 , q = 0;
        while(p<a.size())
        {
            if(a[p]==b[q])
            {
                p++;q++;
            }
            else
            {
                p++;
            }
        }
        
        
        return p==a.size() && q==b.size()?true : false;
    } 
    
     int longestStrChain(vector<string>& words) {
        int n = words.size();
        sort(words.begin(),words.end() , [](string a,string b){
            return a.size()<b.size();
        });
        
        vector<int> dp(n,1);
        int maxi = 1;
        
        for(int i=1 ; i<n; i++)
        {
            for(int j=0; j<i ; j++)
            {
                if(compare(words[i],words[j]) && dp[j]+1>dp[i])
                {
                    dp[i] = dp[j]+1;
                }
            }
            maxi = max(maxi,dp[i]);
        }
        
        return maxi;
    }
};