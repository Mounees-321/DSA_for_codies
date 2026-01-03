class Solution {
    public int lengthOfLIS(int[] arr) {
         int n = arr.length;
         int[] dp = new int[n];
         Arrays.fill(dp,1);
         
         int max_ = 1;
         for(int i= 1 ; i<n ; i++)
         {
             for(int j = 0; j<i; j++)
             {
                 if(arr[i]>arr[j])
                {
                    int val = dp[j]+1;
                    max_ = Math.max(val,max_);
                    dp[i] = Math.max(dp[i],val);
                    
                }
             }
         }
         return max_;
    }
}