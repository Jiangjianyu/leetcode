//
// Created by jjy on 21-12-21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr)
    {}

    ListNode(int x) : val(x), next(nullptr)
    {}

    ListNode(int x, ListNode *next) : val(x), next(next)
    {}
};

//class Solution
//{
//public:
//    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//    {
//        if (!headA || !headB)
//        {
//            return nullptr;
//        }
//        unordered_set<ListNode *> myset;
//
//        ListNode *ptr1 = headA;
//        ListNode *ptr2 = headB;
//
//        while (ptr1 != nullptr)
//        {
//            myset.insert(ptr1);
//            ptr1 = ptr1->next;
//        }
//        int i = 1;
//
//        while (ptr2 != nullptr)
//        {
//            if (i < 2 && myset.find(ptr2) != myset.end())
//            {
//                return ptr2;
//            }
//            if (myset.find(ptr2) == myset.end() && myset.find(ptr2->next) != myset.end())
//            {
//                return ptr2->next;
//            }
//            ptr2 = ptr2->next;
//            i++;
//
//        }
//        return nullptr;
//
//
//    }
//};
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (!headA || !headB)
        {
            return nullptr;
        }
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        while (p1 != p2)
        {
            if (p1 == nullptr && p2 != nullptr)
            {
                p1 = headB;
                p2 = p2->next;
            } else if (p1 != nullptr && p2 == nullptr)
            {
                p1 = p1->next;
                p2 = headA;
            } else if (p1 && p2)
            {
                p1 = p1->next;
                p2 = p2->next;
            }

        }
        return p1;


    }
};

//class Solution
//{
//public:
//    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//    {
//        if (headA == nullptr || headB == nullptr)
//        {
//            return nullptr;
//        }
//        ListNode *pA = headA, *pB = headB;
//        while (pA != pB)
//        {
//            pA = pA == nullptr ? headB : pA->next;
//            pB = pB == nullptr ? headA : pB->next;
//        }
//        return pA;
//    }
//};
int main()
{
    ListNode *head1 = new ListNode(3);

    ListNode *head2 = new ListNode(2, head1);

    Solution ss;
    auto aa = ss.getIntersectionNode(head1, head2);


    return 0;
}