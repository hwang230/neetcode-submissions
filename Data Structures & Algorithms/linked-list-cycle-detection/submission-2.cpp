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
        std::unordered_map<ListNode*, int> dict;
        while (head){
            if (dict.count(head) == 1){
                return true;
            } 
            dict[head] = 1;
            head = head->next;
        }
        return false;
    }
};
