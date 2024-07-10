/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool isPalindrome(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *next = curr -> next;
    int flag = 1;                           // Checking if the two are the same

    while (curr) {
        curr -> next = prev;
        next = curr -> next;
        prev = curr;
        curr = next;
    }

    while (prev) {
        if (head != prev) {
            flag = 0;
        }
        prev = prev -> next;
    }
    
    if (flag) {
        return true;
    } else {
        return false;
    }
}
