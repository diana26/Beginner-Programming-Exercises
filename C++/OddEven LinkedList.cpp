ListNode* oddEvenList(ListNode* head) {
    if (head == NULL)
        return NULL;        
    ListNode* even = head->next;
    ListNode* odd = head;
    ListNode* node = even;
    while (even && even->next != NULL) {           
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = node;
    return head;
}