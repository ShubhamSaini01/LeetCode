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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* cur = head;
        int length=1;
        if(!head)
            return NULL;
        while(cur->next){
            cur=cur->next;
            length++;
        }
        int rotate= k % length;
        int move = length-rotate;
        cur->next = head;
        while(move--){
            cur=cur->next;
        }
        head= cur->next;
        cur->next=NULL;
        return head;              
    }
};
