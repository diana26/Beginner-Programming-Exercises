ListNode* Solution::detectCycle(ListNode* A) {
    ListNode *slow = A;
    ListNode *fast = A;
    int x = 0;
    
    while (slow != NULL && fast != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            x = 1;
            break;
        }
    }
    
    if (x == 0)
        return NULL;
    
    if (fast == NULL || fast->next == NULL)
        return NULL;
    slow = A;
    
    while (slow !=  fast ) {
        slow = slow->next;
        fast = fast->next;
        if (slow == fast)
            return fast;
    }
    return NULL;
}