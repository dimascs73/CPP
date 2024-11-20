#include <iostream>
#include<list>


// Definition for singly-linked list.

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode();
        ListNode* curr = temp;
        while (list1 != 0 && list2 != 0) {
            if (list1->val <= list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        if (list1 != 0)
        {
            curr->next = list1;
        }
        else curr->next = list2;
        

        return temp->next;
    }
};

int main()
{
    ListNode l1;
    ListNode l2;

    l1 = (1);
    l2 = (-2);

    Solution res;

    res.mergeTwoLists(&l1, &l2);


    return 0;
}
