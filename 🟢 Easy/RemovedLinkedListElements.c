/*
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

 * Definition for singly-linked list. */

 #include <stdio.h>
 #include <stdlib.h>

 struct ListNode {
    int val;
    struct ListNode *next;
 };


struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *tmp;
    struct ListNode *prev;
    struct ListNode *curr = head;

    while (curr -> next != NULL) {
        if (curr -> val == val) {
            tmp = curr;

            curr = curr -> next;

            if (prev != NULL) {
                prev -> next = curr;
            }

            free (tmp);
        }
    }
}
