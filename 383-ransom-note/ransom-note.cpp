class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()<=magazine.length())
        {
            unordered_map<char,int> magz_hash;
            for(auto j:magazine)
            {
                magz_hash[j]++;
            }
             for(auto i:ransomNote)
            {
                 if(!magz_hash[i])
                    return false;

                magz_hash[i]-=1;
            }
            return true;

        }
        
        return false;
    }
};