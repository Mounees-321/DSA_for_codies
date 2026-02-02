class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n,0);
        vector<int> right(n,0);

        int lmax = 0 , rmax = 0;

        for(int i=1,j=n- 2; i<n; i++,j--)
        {
            lmax = max(lmax,height[i-1]);
            rmax = max(rmax,height[j+1]);

            left[i] = lmax;
            right[j] = rmax;
        }

      
        int sum = 0;
        for(int k=0; k<n; k++)
        {
            int val = min(left[k],right[k])-height[k];
            if(val>0)
                sum+=val;
        }
        
        return sum;
        
    }
};