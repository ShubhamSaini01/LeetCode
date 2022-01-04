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
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        string s ="";
        // if(fast->next==NULL) return true;
        while(fast){
            s+=to_string(fast->val);
            fast=fast->next;
        }
        int len = s.length()-1;
        // if(s.length()==1)
        //     return true;
        int i=0;
        // cout<<" "<<s<<" ";
        while(i <= len){
            if(s[i++]!=s[len--])
                return false;
        }
        
        return true;
    }
};
