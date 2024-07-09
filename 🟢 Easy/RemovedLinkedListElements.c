/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *canc;
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;

    while (curr != NULL) {
        if (curr -> val == val) {
            if (prev != NULL) {
                prev -> next = curr -> next;
                canc = curr;
                curr = curr -> next;
                free(canc);
            } else {
                head = curr -> next;
                canc = curr;
                free(canc);
                curr = head;
            }
        } else {
            prev = curr;
            curr = curr -> next;
        }
    }

    return head;
}
