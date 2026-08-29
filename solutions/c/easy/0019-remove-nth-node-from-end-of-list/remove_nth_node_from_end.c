/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *s=head;
    int x=0;
    if(head->next==NULL && n==1)
    {
        head=NULL;
        return head;
    }
    while(s!=NULL)
    {
        x++;
        s=s->next;
    }
    s=head;
    while(s!=NULL)
    {
        x--;
        if(x==n)
        {
            s->next=s->next->next;
            break;
        }
        else if(x==n-1)
        {
            head=head->next;
            break;
        }
        s=s->next;
    }
    return head;
}
