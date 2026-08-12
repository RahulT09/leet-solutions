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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> val;

        ListNode* temp = head;
        while (temp) {
            val.push_back(temp->val);
            temp = temp->next;
        }

        swap(val[k-1], val[val.size() - k]);

        temp = head;
        int i = 0;
        while (temp) {
            temp->val = val[i++];

            temp = temp->next;
        }
        return head;
    }
};