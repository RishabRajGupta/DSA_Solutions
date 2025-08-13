// 21. Merge Two Sorted Lists

// Topics : Linked List, Recursion

// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.

// Example 1:
//   Input: list1 = [1,2,4], list2 = [1,3,4]
//   Output: [1,1,2,3,4,4].

// Example 2:
// Input: list1 = [], list2 = []
// Output: [].
  
// Example 3:
//   Input: list1 = [], list2 = [0]
//   Output: [0]

// Constraints:
//   The number of nodes in both lists is in the range [0, 50].
//   -100 <= Node.val <= 100
//   Both list1 and list2 are sorted in non-decreasing order.

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        ListNode* head1 = list1;
        ListNode* head2 = list2;

        while(head1 && head2){
            if(head1->val < head2->val){
                temp->next = head1;
                head1 = head1->next;
            }
            else {
                temp->next = head2;
                head2 = head2->next;
            }
            temp = temp->next;
        }
        temp->next = (head1) ? head1 : head2;

        return dummy->next;
    }
};

// Time Complexity : O(n + m)
// Space Complexity : O(1)
// where :
// n -> size of list1
// m -> size of list2
