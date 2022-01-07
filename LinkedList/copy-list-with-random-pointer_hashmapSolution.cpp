/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* headCopied= head;
        // Node* headCopied1=  headCopied;
        Node* curr= head;
        unordered_map<Node*, Node*> hashMap;
        // Node* headCopied;
        while(curr){
            Node* temp = new Node(curr->val);
            hashMap[curr]= temp; 
            curr=curr->next;
        }
        curr= head;
        while(curr){
            headCopied = hashMap[curr];
            headCopied->next = hashMap[curr->next];
            headCopied->random = hashMap[curr->random];
            // headCopied = 
            
            curr=curr->next;
        }
        return hashMap[head];
    }
};
