#include <iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if (head==nullptr)
        {
            return head;
        }
        ListNode *temp=head;
        int count=0;
        while (temp!=nullptr)
        {
            temp=temp->next;
            count++;
        }
        ListNode* current=head;
        for (int i = 1; i < k; i++)
        {
            current=current->next;
        }
        ListNode *toSwap=current;
        int tempVal=current->val;
        ListNode *toSwap2=head;
        for (int i = 1; i < count - k + 1; i++) 
        {
            toSwap2=toSwap2->next;
        }
        current->val=toSwap2->val;
        toSwap2->val=tempVal;
        return head;
    }
};