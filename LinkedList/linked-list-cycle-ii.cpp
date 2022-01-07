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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast =head;
        ListNode *slow =head;
        if( head == NULL || head->next == NULL ) 
            return NULL;
        // if( head == head->next->next)
        //     return head;
        while (fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if (slow==fast)
                break;
        }
        if (slow != fast)
        return NULL;
 
        // If loop exists. Start slow from
        // head and fast from meeting point.
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
 
    return slow;
        cout<<slow->val<<" ";
        cout<<fast->val<<" ";
        return slow->next;
        
    }
};
