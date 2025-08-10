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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        if (head ==nullptr)
        {
            return nullptr;
        }
        ListNode *prev = head;
        ListNode *current = head->next;
        while (current!=nullptr)
        {
            if (current->val==val)
            {
                prev->next = current->next;
                ListNode *temp = current;
                current = current->next;
                delete temp;
            }
            else{
                current = current->next;
                prev = prev->next;
            }
        }
        return head;
    }
};