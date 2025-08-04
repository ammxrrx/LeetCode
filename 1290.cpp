#include <iostream>
#include <cmath>
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
    int getDecimalValue(ListNode* head) {
        ListNode* current = head;
        string s = "";
        while (current != nullptr) {
            s += current->val + '0';
            current = current->next;
        }
        int result=0;
        int base=2;
        int n=0;
        for (int i = s.length() - 1; i >= 0; i--)
		{
			if (((s[i] - 48) >= 0) && ((s[i] - 48) <= 9))
			{
				result = ((s[i] - 48) * pow(base, n)) + result;
				n = n + 1;
			}
		}
        cout<<result<<endl;
        return result;
    }
};

int main(){
    Solution s;
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(0);
    ListNode* node3 = new ListNode(1);
    node1->next = node2;
    node2->next = node3;
    ListNode* head = node1;
    s.getDecimalValue(head);
    return 0;
}