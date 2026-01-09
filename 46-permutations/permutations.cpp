class Solution {
public:

    vector<vector<int>> res;
    vector<int> temp;
        

        void back(int n,vector<int> nums){
            if(n==temp.size())
            {
                res.push_back({temp});
                return;
            }

            for(auto x:nums)
            {
                if(find(temp.begin(), temp.end(), x) == temp.end())

                    {
                    temp.push_back(x);
                    back(n,nums);
                    temp.pop_back();  }
            }
        }
    vector<vector<int>> permute(vector<int>& nums) {

        back(nums.size(),nums);
        return res;
    }
};