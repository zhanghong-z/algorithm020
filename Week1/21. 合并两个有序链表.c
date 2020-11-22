struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if (l1 == NULL || l2 == NULL) {
        return l1 != NULL ? l1 : l2;
    }

    struct ListNode* mergeHead = l1->val > l2->val ? l2 : l1;  
    struct ListNode* cur1 = mergeHead == l1 ? l1 : l2;         
    struct ListNode* cur2 = mergeHead == l1 ? l2 : l1;
    struct ListNode* pre = NULL;  
                            
    struct ListNode* next = NULL;
    while (cur1 != NULL && cur2 != NULL) {
        if (cur1->val <= cur2->val) {
            pre = cur1;
            cur1 = cur1->next;
        } else {
            next = cur2->next;  
            pre->next = cur2;   
            cur2->next = cur1;  
            pre = cur2;
            cur2 = next;            
        }
    }
    pre->next = cur1 == NULL ? cur2 : cur1;

    return mergeHead;
}