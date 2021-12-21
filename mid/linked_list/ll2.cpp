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
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode* evenhead = head->next;
        ListNode* odd = head;
        ListNode* even = evenhead;

        while (even != nullptr && even->next != nullptr){
            odd->next = even->next;
            even->next = odd->next->next;
            odd = odd->next;
            even = even->next;

        }
        odd->next = evenhead;
        return head;





    }
};


int main()
{


    return 0;
}