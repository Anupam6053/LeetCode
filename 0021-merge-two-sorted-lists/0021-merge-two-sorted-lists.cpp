class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to act as the head of the merged list
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;

        // Traverse both lists until one of them is exhausted
        while (list1 != nullptr && list2 != nullptr) {
            // Compare the values of the nodes in both lists
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;  // Move to the next node in list1
            } else {
                current->next = list2;
                list2 = list2->next;  // Move to the next node in list2
            }
            current = current->next;  // Move the pointer forward
        }

        // If one list is not exhausted, append the rest of the other list
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        // Return the merged list, skipping the dummy node
        return dummy->next;
    }
};
