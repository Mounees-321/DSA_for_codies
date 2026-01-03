/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
      
        ListNode* hd = head;
        unordered_set<ListNode*> res;
        while(hd!=NULL)
        {
            if(res.count(hd))
                return true;
            res.insert(hd);
            hd = hd->next;
        }
        return false;

        

        
    }
};