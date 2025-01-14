class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* jk = ans;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val < list2->val) {
                jk->next = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                jk->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            jk = jk->next; 
        }

        while (list1 != NULL) {
            jk->next = new ListNode(list1->val);
            list1 = list1->next;
            jk = jk->next;
        }

        while (list2 != NULL) {
            jk->next = new ListNode(list2->val);
            list2 = list2->next;
            jk = jk->next;
        }

        return ans->next; 
    }
};