class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";

        string pre_res = countAndSay(n-1);
         string res = "";
         string last="";
         last+=pre_res[0];
         for(int i=1; i<pre_res.length() ; i++)
         {
            
            if(pre_res[i]==last[last.size()-1])
            {
                last+=pre_res[i];
            }
            else
            {
                res = res + to_string(last.size())+last[last.size()-1];
                last=pre_res[i];
            }
         }
         return  res + to_string(last.size())+last[last.size()-1];


    }
};