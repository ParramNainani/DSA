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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr !=NULL){
            ListNode* next = curr->next;
            if(curr->val == val){
                if(prev==nullptr){
                    head = next;
                }
                else{
                    prev->next = next;
                }
            }
            else{
                prev  = curr;
            }
            curr = next;
        }
        return head;
    }
};