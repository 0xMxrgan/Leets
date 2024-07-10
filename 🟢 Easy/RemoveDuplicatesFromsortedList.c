/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *tmp;
    struct ListNode *curr = head;
    struct ListNode *canc;
    struct ListNode *prev;
    struct ListNode *next = curr -> next;

    while (curr != NULL) {

        for (tmp = curr -> next; tmp != NULL; tmp = tmp -> next) {
            prev = curr;
            if (curr -> val == tmp -> val) {

                prev -> next = tmp -> next;
                curr -> next = tmp -> next;
                next = tmp -> next;
                canc = tmp -> val;
                free(canc);
                
            }
        }

        curr = next;
    }

    return head;
}
