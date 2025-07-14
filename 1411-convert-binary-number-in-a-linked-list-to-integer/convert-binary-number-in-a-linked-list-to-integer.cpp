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
    int getDecimalValue(ListNode* head) {
        
        // int result=0;

        // while(head)
        // {
        //     result=(result<<1) | (head->val);
        //     head=head->next;
        // }
        // return result;

        ListNode *curr=head, *prev=NULL, *fut=NULL;
        while(curr)
        {
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
            head=prev;
        }
        int power=0;
        int result=0;
        while(head)
        {
            result+=(head->val * pow(2,power));
            power++;
            head=head->next;
        }
        return result;
    }
};