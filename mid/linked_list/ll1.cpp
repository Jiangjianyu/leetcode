//
// Created by jjy on 21-12-21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

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

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        int ad = 0;
        ListNode *head = nullptr;
        ListNode *tail = nullptr;

        while (l1 != nullptr || l2 != nullptr)
        {
            int ll1 = l1 ? l1->val : 0;
            int ll2 = l2 ? l2->val : 0;

            int valtemp = (ll1 + ll2 + ad) % 10;
            ad = (ll1 + ll2 + ad) / 10;
            if (!head)
            {
                head = new ListNode(valtemp);
                tail = head;
            } else
            {
                tail->next = new ListNode(valtemp);
                tail = tail->next;
            }
            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }
        if (ad > 0)
        {
            tail->next = new ListNode(ad);
        }
        return head;

    }
};


int main()
{


    return 0;
}