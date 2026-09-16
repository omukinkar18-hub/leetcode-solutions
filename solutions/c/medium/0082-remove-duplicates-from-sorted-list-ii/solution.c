/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;

    struct ListNode dummy,*temp=head,*prev,*end;
    dummy.next=head;
    prev=&dummy;
    while(temp!=NULL)
    {

        if(temp->next!=NULL && temp->val==temp->next->val)
        {
            int val=temp->val;
            end=temp;
            while(end!=NULL && end->val==val)
                end=end->next;

            prev->next=end;
            temp=end;
        }
        else 
        {
            prev = temp;
            temp = temp->next;
        }
    }
    return dummy.next;
}
