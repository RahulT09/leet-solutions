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
    // merge sorted ll
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode dummy(-1);
        ListNode* temp = &dummy;

        ListNode* i = left;
        ListNode* j = right;

        while (i != NULL && j != NULL) {
            if (i->val <= j->val) {
                temp->next = i;
                i = i->next;
            } else {
                temp->next = j;
                j = j->next;
            }

            temp = temp->next;
        }

        if (i) {
            temp->next = i;
            i = i->next;
        } else {
            temp->next = j;
            j = j->next;
        }

        return dummy.next;
    }

public:
    // split LL
    ListNode* split(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = nullptr;
        return slow;
    }

public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* rhead = split(head);

        ListNode* left = sortList(head);
        ListNode* right = sortList(rhead);

        return merge(left, right);
    }
};

