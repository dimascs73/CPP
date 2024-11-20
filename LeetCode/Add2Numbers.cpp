#include <iostream>
#include<list>

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode();
        ListNode* current = temp;
        int tmp = 0;
        
        while (l1 !=nullptr || l2 !=nullptr || tmp !=0)
        {        
            int sum = 0;
            if (l1 != nullptr){
            sum += l1->val; 
            l1 = l1->next;
        }
            if (l2 != nullptr){
            sum += l2->val; 
            l2 = l2->next;
        }
        sum += tmp;
        tmp = sum/10;
        ListNode* new_new = new ListNode(sum%10);
        temp->next = new_new;
        temp = temp->next;
        }
    return temp->next; 
    }
};

int main()
{
    ListNode *head1 = new ListNode();
    ListNode *second1 = new ListNode();
    ListNode *third1 = new ListNode();
    ListNode *head2 = new ListNode();
    ListNode *second2 = new ListNode();
    ListNode *third2 = new ListNode();
      
    ListNode list1(head1->val = 4, head1->next = second1);

    second1->val = 2;
    second1->next = third1;
    third1->val = 5;
    third1->next = nullptr;

    ListNode list2(head2->val = 1, head2->next = second2);
    second2->val = 2;
    second2->next = third2;
    third2->val = 7;
    third2->next = nullptr;

    Solution answer;

    answer.addTwoNumbers(&list1, &list2);

    return 0;
}
