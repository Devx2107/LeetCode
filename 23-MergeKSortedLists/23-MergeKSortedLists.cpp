// Last updated: 21/05/2026, 18:14:07
class Solution {
public:
    struct cmp {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;

        for(auto node : lists) {
            if(node) pq.push(node);
        }
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        while(!pq.empty()) {
            
            ListNode* node = pq.top();
            pq.pop();

            curr->next = node;
            curr = curr->next;

            if(node->next) {
                pq.push(node->next);
            }
        }
        return dummy->next;
    }
};