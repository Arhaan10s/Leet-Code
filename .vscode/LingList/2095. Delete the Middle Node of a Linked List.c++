/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:         //USING Find Middle approach 
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
        {
            return NULL;
        }
        int c=0;
        ListNode *p1=head, *p2=head;
        while(p1!=nullptr)
        {
            c++;
            p1=p1->next;
        }
        int middle=c/2;
        for(int i=0;i<middle-1;i++)
        {
            p2=p2->next;
        }
        p2->next=p2->next->next;
        return head;
    }
public: // USING Fast and Slow Pointer Approach
     ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
        {
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head->next->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};