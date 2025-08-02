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
    ListNode* middleNode(ListNode* head) {
        if (head==nullptr)
        {
            return head;
        }
        int len=0;
        ListNode *temp=head;
        while (temp!=nullptr)
        {
            temp=temp->next;
            len++;
        }
        ListNode *current=head;
        for (int i = 0; i < len/2; i++)
        {
            current=current->next;
        }
        return current;
    }
};