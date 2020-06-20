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
    ListNode* middleNode(ListNode* head) {
     ListNode* x = head;
        int n = 0;
        while(x != nullptr) ++n, x = x->next;
        n/=2;
        x = head;
        while(n) --n, x = x->next;
        //int xx = x->val;
        return x;
    }
};