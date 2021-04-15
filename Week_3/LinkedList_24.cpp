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
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp = head;
        temp->next = head;
        ListNode *curr = temp->next;
        while(true){
            ListNode *first = temp->next;
            ListNode *second = first->next;
            first->next = temp;
            if(second == NULL || second->next == NULL){
                temp->next = second;
                break;
            }
            temp->next= second->next;
            temp = second;
        }
        return curr;
    }
};
