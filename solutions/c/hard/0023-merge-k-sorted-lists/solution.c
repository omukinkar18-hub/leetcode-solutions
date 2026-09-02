#include <stdlib.h>
/**
 Definition for singly-linked list.
 struct ListNode {
    int val;
    struct ListNode *next;
};
**/
struct ListNode* create() {
    struct ListNode* new = (struct ListNode*)malloc(sizeof(struct ListNode));
    new->next = NULL;
    return new;
}

void swap(struct ListNode* i, struct ListNode* j) 
{
    int bak = i->val;
    i->val = j->val;
    j->val = bak;
}

void sort(struct ListNode* head) 
{
    for (struct ListNode* i = head; i != NULL; i = i->next) 
    {
        for (struct ListNode* j = i->next; j != NULL; j = j->next) 
        {
            if (i->val > j->val) 
            {
                swap(i, j);
            }
        }
    }
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) 
{
    if (lists == NULL || listsSize == 0)
        return NULL;

    struct ListNode *s = NULL, *head = NULL, *new = NULL, *curr = NULL;

    for (int i = 0; i < listsSize; i++) 
    {
        s = lists[i];
        while (s != NULL) 
        {
            new = create();
            new->val = s->val;
            if (head == NULL) 
            {
                head = new;
                curr = head;
            } 
            else 
            {
                curr->next = new;
                curr = new; 
            }
            s = s->next;
        }
    }

    sort(head); 
    return head;
}
