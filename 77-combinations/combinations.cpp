class Solution {
public:

     vector<vector<int>> res;
        vector<int> temp;
        void back(int start,int k,int n)
        {
            if(temp.size()==k){
                res.push_back({temp});
                return;
            }

            for(int i=start; i<=n ; i++)
            {
                temp.push_back(i);
                back(i+1,k,n);
                temp.pop_back();
            }
        }

    vector<vector<int>> combine(int n, int k) {
       

            back(1,k,n);
            return res;

           }
};