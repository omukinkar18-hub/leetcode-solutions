/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void swap(struct ListNode** a,struct ListNode** b,struct ListNode* prev,struct ListNode** head)
{
    struct ListNode* temp,*next1;
    next1=(*b)->next;
    (*b)->next=*a;
    (*a)->next=next1;

    if(prev==NULL)
        *head=*b;
    else
        prev->next=*b;

}

struct ListNode* swapPairs(struct ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;

    struct ListNode*temp=head,*prev=NULL,*newpair;

    int lenght=0;

    while(temp!=NULL)
    {
        lenght++;
        temp=temp->next;
    }
    temp=head;
    if(lenght%2==0)
    {
        while(temp!=NULL)
        {
            newpair=temp->next->next;
            struct ListNode* first = temp;
            struct ListNode* second = temp->next;
            swap(&first,&second,prev,&head);
            prev=first;

            temp=newpair;
        }
    }
    else
    {
        while(temp!=NULL && temp->next!=NULL)
        {
            newpair=temp->next->next;
            struct ListNode* first = temp;
            struct ListNode* second = temp->next;
            swap(&first,&second,prev,&head);
            prev=first;

            temp=newpair;
        }
    }

    return head;
}
