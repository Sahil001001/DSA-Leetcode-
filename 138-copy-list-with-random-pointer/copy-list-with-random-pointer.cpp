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
        if(head ==NULL) return NULL;
        Node* chead=new Node(head->val);
        Node* temp = head->next;
        Node* ctemp = chead;
        while(temp){
            Node* newNode = new Node(temp->val);
            ctemp->next = newNode;
            ctemp = ctemp->next;
            temp = temp->next;
        }
        Node*b = chead;
        Node*a = head;

        unordered_map<Node*,Node*>mp;
        Node* tempa = a;
        Node* tempb = b;
        while(tempa){
            mp[tempa]=tempb;
            tempa=tempa->next;
            tempb=tempb->next;
        }
        for(auto x : mp){
           Node* o = x.first;
           Node* d = x.second;
           if(o->random){
              Node* orgR = o->random;
              Node* dupR = mp[orgR];
              d->random = dupR;
           }


        }
        return chead;
        

         
    }
};