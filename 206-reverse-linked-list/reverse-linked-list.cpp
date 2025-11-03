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
    ListNode* reverseList(ListNode* head) {

        ListNode* next = nullptr;

        // Base Cases
        if (head == nullptr)
            return head;
        if (head->next == nullptr)
            return head;

        // Recursive case
        next = reverseList(head->next);
        (head -> next)->next = head; // Reverse the link
        head->next = nullptr;      // Break the link
        return next;
    }
};