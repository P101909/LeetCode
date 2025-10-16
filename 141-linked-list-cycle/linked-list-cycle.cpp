/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        // Have a hash map, the key is each memeber of the linked list and the
        // value is how many times A node has pointed to them, if it is ever
        // more than one, return true;
        map<ListNode*, int> nodes;
        ListNode* copy1 = head;

        while (copy1 != nullptr) {
            if (nodes[copy1] == 1)
                return true;
            if (nodes[copy1] == 0)
                nodes[copy1] = 1;
            copy1 = copy1->next;
        }
        // If we exit the for loop that means there were no cycles
        return false;
    }
};