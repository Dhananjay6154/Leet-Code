/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v1;
        
        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp = lists[i];
            while(temp != NULL)
            {
                v1.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(v1.begin(),v1.end());
        if(v1.size() == NULL)
        {
            return NULL;
        }

        ListNode* result = new ListNode(v1[0]);
        ListNode* temp = result;

        for(int i=1;i<v1.size();i++)
        {
            temp->next = new ListNode(v1[i]);
            temp = temp->next;
        }
        return result;

    }
};