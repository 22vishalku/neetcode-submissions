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
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        ListNode* c = list1;
        ListNode* d = list2;
        ListNode* l;

        if (list1->val <= list2->val)
            l = list1;
        else
            l = list2;

        while (c != nullptr && d != nullptr) {

            if (c->val <= d->val) {
                while(c->next!=nullptr && c->next->val<=d->val){
                    c=c->next;
                }
                ListNode* t = c->next;
                c->next = d;
                c = t;
            }
            else {
                 while(d->next!=nullptr && d->next->val<=c->val){
                    d=d->next;
                }
                ListNode* t = d->next;
                d->next = c;
                d = t;
            }
        }

        while (c != nullptr && c->next != nullptr) {
            c = c->next;
        }

        while (d != nullptr && d->next != nullptr) {
            d = d->next;
        }

        return l;
    }
};