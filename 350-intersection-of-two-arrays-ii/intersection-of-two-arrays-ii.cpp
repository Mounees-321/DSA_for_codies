class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> has;
        vector<int> res;
        for(auto i:nums1)
            has[i]++;
        
        for(auto j:nums2)
        {
            if(has[j]>0)
            {
                res.push_back(j);
                has[j]--;
            }
        }
        return res;
    }
};