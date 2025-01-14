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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int n = 0,k=0,sum=0;
        while(temp != NULL){
            temp = temp->next;
            n++;
        }
        while(head !=NULL){
            k = head->val;
            sum += k*pow(2,n-1);
            head = head->next;
            n--;
        }
        return sum;       
    }
};