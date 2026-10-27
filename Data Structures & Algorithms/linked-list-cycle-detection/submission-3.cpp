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
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (slow != nullptr && fast != nullptr){
            if (fast->next) {
                fast=fast->next;
            } else return false;
            if (fast->next) {
                fast=fast->next;
            } else return false;
            if (slow->next) {
                slow=slow->next;
            } else return false;

            if (slow == fast) return true;
        } 
        return false;
    }
};
