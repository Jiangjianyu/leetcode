//
// Created by jjy on 21-12-17.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>

using namespace std;

class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        if (numBottles < numExchange)
            return numBottles;

        int result = numBottles;
        int empty = 0;
        int drink = numBottles;
        int E = numBottles;
        while (E >= numExchange)
        {
            drink = E / numExchange;
            empty = E % numExchange;
            E = drink + empty;

            result = result + drink;

        }
        return result;
    }
};

int main()
{
    Solution ss;

    int a = ss.numWaterBottles(15, 8);
    cout << a << endl;


    return 0;
}