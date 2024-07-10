/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr;

    for (curr = head; curr != NULL; curr = curr -> next) {

        curr -> next = prev;
        prev = curr;
        curr = curr -> next;
    }

    return head;
}
