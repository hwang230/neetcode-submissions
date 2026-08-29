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
        if (head == NULL){
            return false;
        }
        std::map<ListNode*, int> visited;
        while (head->next != NULL){
            if (visited.count(head) == 0){
                visited[head] = 1;
                head = head->next;
            } else{
                return true;
            }
        }
        return false;
    }
};
