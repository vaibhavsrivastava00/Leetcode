class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL) {
            return NULL;
        }

        // Check if there are at least k nodes to reverse
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL && count < k) {
            temp = temp->next;
            count++;
        }

        if (count < k) {
            return head; // If fewer than k nodes, return the head as is
        }

        // Reverse k nodes
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* Next = NULL;
        count = 0;
        while (count < k && current != NULL) {
            Next = current->next;
            current->next = prev;
            prev = current;
            current = Next;
            count++;
        }

        // Recursively reverse the remaining nodes
        if (Next != NULL) {
            head->next = reverseKGroup(Next, k);
        }

        return prev; // Return the new head of the reversed group
    }
};
