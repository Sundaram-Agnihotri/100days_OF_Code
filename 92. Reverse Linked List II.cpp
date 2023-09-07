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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
            return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prevLeft = &dummy;
        ListNode* leftNode = head;

        // Traverse to the 'left' position
        for (int i = 1; i < left; i++) {
            prevLeft = leftNode;
            leftNode = leftNode->next;
        }

        // Reverse the sublist between 'left' and 'right'
        ListNode* prev = nullptr;
        ListNode* curr = leftNode;
        for (int i = left; i <= right; i++) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Connect the reversed sublist back to the list
        prevLeft->next = prev;
        leftNode->next = curr;

        return dummy.next;

    }
};
