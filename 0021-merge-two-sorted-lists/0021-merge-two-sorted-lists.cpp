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
        ListNode dummy(-1);
        ListNode* tail = &dummy;

        ListNode* i = list1;
        ListNode* j = list2;

        while (i && j) {
            if (i->val <= j->val) {
                tail->next = i;
                i = i->next;
            } else {
                tail->next = j;
                j = j->next;
            }
            tail = tail->next;
        }

        tail->next = (i ? i : j);
        return dummy.next;
    }
};