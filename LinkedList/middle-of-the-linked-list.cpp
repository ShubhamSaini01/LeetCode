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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast =head;
        ListNode* slow =head;
        
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
        // if (head->next==NULL)
        //     return head;
    //     int count=0;
    //     while(fast!=NULL){
    //         if(fast->next!=NULL)
    //             fast=fast->next->next;
    //         slow=slow->next;
    //         if(fast==NULL || fast->next==NULL)
    //            return slow; 
    //     }
    //     return slow;
     }
};
