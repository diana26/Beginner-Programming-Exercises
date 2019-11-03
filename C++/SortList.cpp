 ListNode* merge(ListNode *l1, ListNode*l2) {
        ListNode* ans = new ListNode(0);
        ListNode * p = ans;
        
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                p->next = l1;
                l1 = l1->next;
            }
            else {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }
        
        while (l1 != NULL) {
            p->next = l1;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            p->next = l2;
            l2 = l2->next;
        }
        return ans->next;
    }
    
    
    ListNode* sortList(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *slow = head; 
        ListNode *fast = head;
        
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *aux1 = sortList(head);
        ListNode *aux2 = sortList(slow);
        
        return merge(aux1, aux2);
    }