#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if (list1==nullptr)
//         {
//             return list2;
//         }
//         if (list2==nullptr)
//         {
//             return list1;
//         }
//         ListNode *newList= new ListNode(-1);
//         ListNode* tail = newList;
//         while (list1!=nullptr&&list2!=nullptr)
//         {
//             if (list1->val>=list2->val)
//             {
//                 tail->next=list2;
//                 list2=list2->next;

//             }
//             else{
//                 tail->next=list1;
//                 list1=list1->next;
//             }
//             tail=tail->next;
//         }
//     }
// };


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1==nullptr)
        {
            return list2;
        }
        if (list2==nullptr)
        {
            return list1;
        }
        if ((list1->val>list2->val))
        {
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
        else
        {
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
    }
};