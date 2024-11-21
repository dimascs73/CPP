#include <iostream>
#include<list>
#include <vector>
#include <print>


// Definition for singly-linked list.

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
void PrintList(ListNode* n){
    while (n != nullptr)
    {
        std::cout<<n->val<<" ";
        n = n->next;
    }
    std::cout<<std::endl;
    
}

void PushFront(ListNode** a, int val){
    ListNode* newNode = new ListNode(); // создаем новый указатель на новый элемент для списка
    newNode->val = val; // привязываем значение элемента к новому указателю
    newNode->next = *a; // указываем что следующий указатель это прошлая голова списка
    *a = newNode; // этот указатель теперь голова списка
}

void PushBack(ListNode** a, int val){
    ListNode* newNode = new ListNode(); // создаем новый указатель на новый элемент для списка
    newNode->val = val; // привязываем значение элемента к новому указателю
    newNode->next = nullptr; // этот элемент последний в списке - он указывает на nullptr
    if (*a == nullptr) {
        *a = newNode;
        return;
        } // если лист пустой - новое значение единственное в списке
    ListNode* last = *a;
    while (last->next != nullptr)
    {
        last = last->next; // ищем последний элемент в списке который указывает на nullptr
    }
    last->next = newNode; // указываем последнему элементу листа на вновь введенный элемент
    
}


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
       ListNode* head = new ListNode();
       ListNode* a_numbers = head;
    while (a != nullptr && b != nullptr)
    {
        if (a->val <= b->val)
        {
            
            a_numbers->next = a;
            a = a->next;
        }
        else
        {
            a_numbers->next = b;
            b = b->next;
        }
        a_numbers = a_numbers->next;    
    }

    if (b == nullptr)
        {
            a_numbers->next = a;
        }
        else a_numbers->next = b;
    
    

    return head->next; 
}
};

int main()
{
    
    ListNode* head = new ListNode();
    ListNode* head2 = new ListNode(-5);
    int a = 1;
    std::vector<int> v1{3, 5, 8, 9};
    std::vector<int> v2{-2, 0 ,10};

    ListNode list1(head->val = a, head);
    ListNode list2;

    for (int i = 0; i < v1.size(); i++)
    {
        PushBack(&head, v1[i]);
    }
        for (int i = 0; i < v2.size(); i++)
    {
        PushBack(&head2, v2[i]);
    }
;

    PrintList (head);
    PrintList (head2);


    Solution S;

    PrintList(S.mergeTwoLists (head, head2));

    

    return 0;
}
