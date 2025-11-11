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
    ListNode* middleNode(ListNode* head) {

        //Find the number of nodes
        int size = 0;
        ListNode* copy = head;  
        while (copy != nullptr) {
            size++;
            copy = copy -> next;
        }
        int mid_index;
        // If two middles, retrun second middle
        if (size % 2 == 0) // Even size
            mid_index = (size/2) ;
        else // Odd size
            mid_index = ceil(size/2);
        int i = 0;
        while (i < mid_index){
            i++;
            head = head -> next;
        }
        return head;
    }
};