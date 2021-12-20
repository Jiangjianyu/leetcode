//
// Created by jjy on 21-12-9.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <climits>

using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return false;
        int min = INT_MAX;
        int mid = INT_MAX;
        for (int i:nums)
        {
            if (i <= min)
            {
                min = i;
            } else if (i <= mid)
            {
                mid = i;
            } else
            {
                return true;
            }

        }
        return false;

    }
};

int main()
{
    cout << "start..." << endl;
    Solution ss;
//    cout << a << endl;


    return 0;
}