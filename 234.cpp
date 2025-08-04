#include <iostream>
#include<string>
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
    bool isPalindrome(ListNode* head) {
        ListNode* current = head;
        string s = "";
        while (current != nullptr) {
            s += current->val + '0';
            current = current->next;
        }
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            temp += s[s.length() - 1 - i];
        }
        if (temp==s)
        {
            return true;
        }
        return false;
    }
};
