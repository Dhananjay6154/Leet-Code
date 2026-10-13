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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* list1 = headA;
        ListNode* list2 = headB;
        int count1 = 0;
        int count2 = 0;
        while(list1 != NULL)
        {
            count1++;
            list1 = list1->next;
        }
        while(list2 != NULL)
        {
            count2++;
            list2 = list2->next;
        }
        list1 = headA;
        list2 = headB;

        int diff = abs(count1 - count2);

        if(count1 > count2)
        {
            for(int i=0;i<diff;i++)
            {
                list1 = list1->next;
            }
        }
        else{
            for(int i=0;i<diff;i++)
            {
                list2 = list2->next;
            }
        }
        while(list1 != list2)
        {
            list1 = list1->next;
            list2 = list2->next;

        }
        return list1;
    }
};