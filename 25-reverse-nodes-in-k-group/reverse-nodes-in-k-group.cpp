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
#define node ListNode
    void reverse(node* head, int times){
        node* curr = head;
        node* prev = NULL;
        while(times--){
            node * nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        return;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int size = k;
        if(head==NULL|| head->next==NULL)
          return head;
        node* left = head;
        node* res = NULL;
        node* prevLeft = NULL;
        node*  right;

        while(true){
            right = left;
            for(int i = 0; i<(size-1);i++){
                if(right==NULL) 
                   break;
                right= right->next;
            }
            if(right){
                node* nextLeft = right->next;
                reverse(left,size);
                
                if(prevLeft)
                  prevLeft->next = right;      
                prevLeft = left;
                if(res==NULL)
                  res =right;
                left = nextLeft;
            }
            else{
                if(prevLeft)
                  prevLeft->next=left;

                if(res==NULL)
                  res = left;

                break;
            }
        }
        return res;
    }
};