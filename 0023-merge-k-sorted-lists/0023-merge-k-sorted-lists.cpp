class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>,
                       decltype([](ListNode* a, ListNode* b) {
                           return a->val > b->val;
                       })> pq;

        for (ListNode* node : lists) {
            if (node != nullptr) {
                pq.push(node);
            }
        }

        ListNode dummy(0);
        ListNode* curr = &dummy;

        while (!pq.empty()) {
            ListNode* smallest = pq.top();
            pq.pop();

            curr->next = smallest;
            curr = curr->next;

            if (smallest->next != nullptr) {
                pq.push(smallest->next);
            }
        }

        curr->next = nullptr;
        return dummy.next;
    }
};