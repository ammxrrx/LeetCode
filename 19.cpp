//REMOVE Nth from END!!!

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int count=0;
        while (temp!=nullptr)
        {
            temp=temp->next;
            count++;
        }
        if (n == count) {       //if n==count it means head!!!
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        count=count-n;
        ListNode *current=head;
        for (int i = 1; i < count; i++)
        {
            current=current->next;
        }
        ListNode *toDelete=current->next;
        current->next=current->next->next;
        delete toDelete;
        return head;
    }
};